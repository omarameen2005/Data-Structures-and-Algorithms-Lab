#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    // Q14
    // Find all pairs of prime numbers (A, B) such that A<=B and their sum is also a prime number and does not exceed N.

    // Input
    // The input of the problem consists of the only integer N (1<=N<=10^6).

    // Output
    // On the first line of the output file write the number of pairs meeting the requirements. Then output all pairs one per line (two primes separated by a space).

    // Sample test(s)

    // Input
    // 4

    // Output
    // 0    




    // Answer:
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int countprimes = 0;
    int arr[1000];
    int countpairs = 0;

    for (int i =2; i <= n; i++){
        bool isPrime = true;
        for (int j = 2; j < i; j++){
            if (i % j == 0){
                isPrime = false;
                break;
            }
        }
        if (isPrime){
            countprimes++;
            arr[countprimes] = i;
        }
    }
    
    for (int a = 0; a < countprimes; a++){
        for (int b = 0; b < countprimes; b++){
            if (arr[a] <= arr[b] && arr[a] + arr[b] <= n){
                int sum = arr[a] + arr[b];
                bool isPrimeSum = true;
                for (int j = 2; j < sum; j++){
                    if (sum % j == 0){
                        isPrimeSum = false;
                        break;
                    }
                }
                if (isPrimeSum){
                    cout << "\nThe pair is: " << arr[a] << " " << arr[b] << endl;
                    countpairs++;
                    
                }
            }
        }
    }

    cout << "\nNumber of prime pairs with prime sums: " << countpairs << endl;



    return 0;

    
}