#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC

    // Q6
    // In the English language, nouns are inflected by grammatical number — that is singular or plural. In this problem we use a simple model of constructing plural from a singular form. 
    // This model doesn't always make English plural forms correctly, but it works in most cases. 
    // Forget about the real rules you know while solving the problem and use the statement as a formal document.
    // You are given several nouns in a singular form and your program should translate them into plural form using the following rules:
    // If a singular noun ends with ch, x, s, o the plural is formed by adding es. For example, witch -> witches, tomato -> tomatoes.
    // If a singular noun ends with f or fe, the plural form ends with ves. For example, leaf -> leaves, knife -> knives. Pay attention to the letter f becoming v.
    // Nouns ending with y change the ending to ies in plural. For example, family -> families.
    // In all other cases plural is formed by adding s. For example, book -> books.
    // Input
    // The first line of input contains a single positive integer n (1 ≤ n ≤ 10) — the number of words to be processed. 
    // The following n lines contain one word each. A word consists from 2 to 25 lowercase Latin letters. It is not guaranteed that the given words are real English words from vocabulary.
    // Output
    // Print n given words in their plural forms on separate lines. Keep the words in the same order as they are given in the input.

    // Example(s)
    // sample input
    // sample output
    // 3
    // contest
    // hero
    // lady
    // contests
    // heroes
    // ladies






    // Answer:
    string s;
    cout << "Enter the string: ";
    cin >> s;

    if (s.size() >= 2 && (s.substr(s.size() - 2) == "ch")) {
        s += "es";
    }
    else if (!s.empty() && (s.back() == 'o' || s.back() == 's' || s.back() == 'x')) {
        s += "es";
    }
    else if (!s.empty() && s.back() == 'y' ) {
        s = s.substr(0, s.size() - 1);
        s += "ies";
    }
    else if (!s.empty() && s.back() == 'f') {
        s = s.substr(0, s.size() - 1);
        s += "ves";
    }
    else if (s.size() >= 2 && s.substr(s.size() - 2) == "fe") {
        s = s.substr(0, s.size() - 2);
        s += "ves";
    }
    else {
        s += "s";
    }

   cout << "The plural form is: " << s << endl;

   

   return 0;

}