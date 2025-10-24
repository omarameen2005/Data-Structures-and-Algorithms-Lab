#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC

    // Q4
    // For given integer N (1<=N<=104) find amount of positive numbers not greater than N that coprime with N. Let us call two positive integers 
    // (say, A and B, for example) coprime if (and only if) their greatest common divisor is 1. (i.e. A and B are coprime iff gcd(A,B) = 1).
    // Input
    // Input file contains integer N.
    // Output
    // Write answer in output file.

    // Sample Input
    // 9
    // Sample Output
    // 6    



    // Answer:
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = 0;
    
    for(int i = 1; i < n; i++){
        if (__gcd(i, n) == 1){
            sum += 1;
        }
    }

    cout << "The sum of all integers less than " << n << " that are coprime to " << n << " is: " << sum << endl;


    return 0;


}