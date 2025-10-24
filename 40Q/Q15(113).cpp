#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    // Q15
    // Nearly prime number is an integer positive number for which it is possible to find such primes P1 and P2 that given number is equal to P1*P2. There is given a sequence on N integer positive numbers, you are to write a program that prints “Yes” if given number is nearly prime and “No” otherwise.


    // Input

    // Input file consists of N+1 numbers. First is positive integer N (1£N£10). Next N numbers followed by N. Each number is not greater than 109. All numbers separated by whitespace(s).


    // Output

    // Write a line in output file for each number of given sequence. Write “Yes” in it if given number is nearly prime and “No” in other case.


    // Sample Input

    // 1
    // 6
    // Sample Output

    // Yes    





    // Answer:
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int countprimes = 0;
    int arr[1000];
    bool found = false;

    for (int i = 2; i <= n; i++) {
       bool isPrime = true;
         for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
         }
         if (isPrime) {
            arr[countprimes] = i;
            countprimes++;
            
        }
    }


    for (int a = 0; a < countprimes; a++){
        for (int b = 0; b < countprimes; b++){
            if (arr[a] * arr[b] == n){
                found = true;
            }
        }
    }

    if (!found) {
        cout << "NO.";
    }else {
        cout << "Yes";
    }



    return 0;

    
}