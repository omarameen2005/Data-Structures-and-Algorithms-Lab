#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    // Q16
    // Andrew has just made a breakthrough in sociology: he realized how to predict whether two persons will be good friends or not. It turns out that each person has an inner friendship number (a positive integer). And the quality of friendship between two persons is equal to the greatest common divisor of their friendship number. That means there are prime people (with a prime friendship number) who just can't find a good friend, andWait, this is irrelevant to this problem. You are given a list of friendship numbers for several people. Find the highest possible quality of friendship among all pairs of given people.
    // Input
    // The first line of the input file contains an integer n () — the number of people to process. The next n lines contain one integer each, between 1 and  (inclusive), the friendship numbers of the given people. All given friendship numbers are distinct.
    // Output
    // Output one integer — the highest possible quality of friendship. In other words, output the greatest greatest common divisor among all pairs of given friendship numbers.
    // Example(s)
    // sample input
    // sample output
    // 4
    // 9
    // 15
    // 25
    // 16
    // 5    





    // Answer:
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int arr[n];
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (__gcd(arr[i], arr[j]) > maximum) {
                maximum = __gcd(arr[i], arr[j]);
            }
        }
    }

    cout << "Maximum GCD found: " << maximum << endl;




    return 0;

    
}