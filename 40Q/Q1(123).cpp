#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    // Q1
    // The Fibonacci sequence of numbers is known: F1 = 1; F2 = 1; Fn+1 = Fn + Fn-1, for n>1. You have to find S - the sum of the first K Fibonacci numbers.
    // Input
    // First line contains natural number K (0<K<41).
    // Output
    // First line should contain number S.

    // Sample Input
    // 5
    // Sample Output
    // 12    


    // Answer:
    int k;
    int S = 0;
    int a = 1, b = 1;
    int c = a + b;

    cout << "Enter the value of K: ";
    cin >> k;
    for (int i = 1; i <= k; i++){
        if (i == 1 || i == 2){
            S += 1;
        }
        else{
            
            S += c;
            a = b;
            b = c;
        }
    }

    cout << "The sum of the first " << k << " Fibonacci numbers is: " << S << endl;


    return 0;

    
}