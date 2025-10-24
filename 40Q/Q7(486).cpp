#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    
    // Q7
    // You probably know the game "bulls and cows". Just in case, we explain the rules. The first player picks a four-digit number with all digits distinct (leading zero is allowed) and keeps it secret. The second player tries to guess the secret number. For each guess, the first player issues a response in the form "n bulls, m cows". A "bull" is a digit that is present in both the secret and the guess and occurs in the same position in both. A "cow" is a digit that is present in both numbers, but occurs in different positions.

    // For example, if the first player picked 5071, and the second guessed 6012, the response would be "one bull, one cow". Here the "bull" is the digit 0, as it is in the second position in both numbers, and the "cow" is the digit 1, as it is in the fourth position in the secret, but in the third position in the guess.

    // Write a program to count the number of cows and bulls for the given the secret and guess.

    // Input
    // The first line of the input file contains four digits, the number picked by the first player. The second line contains the number guessed by the second player in the same format.

    // Output
    // The first and only line of the output file should contain two integers separated by a space, the number of "bulls" and the number of "cows".

    // Example(s)
    // sample input
    // sample output
    // 5071
    // 6012
    // 1 1

    // sample input
    // sample output
    // 4321
    // 4321
    // 4 0

    // sample input
    // sample output
    // 1980
    // 0879
    // 0 3

    // sample input
    // sample output
    // 1234
    // 5678
    // 0 0    





    // Answer:
    int a, b;
    string x = to_string(a);
    string y = to_string(b);
    cout << "Enter the first 4-digit number: ";
    cin >> a;
    cout << "Enter the second 4-digit number: ";
    cin >> b;
    int bulls = 0;
    int cows = 0;
    for (int i = 0; i < 4; i++) {
        if (a % 10 == b % 10) {
            bulls++;
        }
        else {
            for (int j = 0; j < 4; j++) {
                if (x[i] == y[j]) {
                    cows++;
                }
            }
        }
        a /= 10;
        b /= 10;
    }

   cout << "Bulls: " << bulls << ", Cows: " << cows << endl;

    return 0;

    
}