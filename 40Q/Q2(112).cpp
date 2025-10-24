#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){

    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC 

    // Q2
    // You are given natural numbers a and b. Find a^b-b^a.
    // Input
    // Input contains numbers a and b (1≤a,b≤100).
    // Output
    // Write answer to output.

    // Sample Input
    // 2 3
    // Sample Output
    // -1    



    // Answer:
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    int ans = (pow(a, b)) - (pow(b, a));
    cout << "The value of a^b - b^a is: " << ans << endl;



    return 0;
}