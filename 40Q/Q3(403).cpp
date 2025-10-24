#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC

    // Q3
    // Once upon a time Professor Idioticideasinventor was travelling by train. Watching cheerless landscape outside the window, 
    // he decided to invent the theme of his new scientific work. All of a sudden a brilliant idea struck him: to develop an effective
    // algorithm finding an integer number, which is x times less than the sum of all its integer positive predecessors, 
    // where number x is given. As far as he has no computer in the train, you have to solve this difficult problem.
    // Input
    // The first line of the input file contains an integer number x (1 ≤ x ≤ 109).
    // Output
    // Output an integer number — the answer to the problem.
    // Example(s)
    // sample input
    // sample output
    // 1
    // 3
    // sample input
    // sample output
    // 2
    // 5    



    // n = 1/x * (n(n-1)/2)
    // Answer:
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    double n = 2*x+1;
    cout << "The answer is: " << n << endl;


    return 0;
}