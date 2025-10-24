#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    // Q10
    // Petya is well-known with his famous cabbage patties. Petya's birthday will come very soon, and he wants to invite as many guests as possible. But the boy wants everybody to try his specialty of the house. That's why he needs to know the number of the patties he can cook using the stocked ingredients. Petya has P grams of flour, M milliliters of milk and C grams of cabbage. He has plenty of other ingredients. Petya knows that he needs K grams of flour, R milliliters of milk and V grams of cabbage to cook one patty. Please, help Petya calculate the maximum number of patties he can cook.

    // Input
    // The input file contains integer numbers P, M, C, K, R and V, separated by spaces and/or line breaks (1 <= P, M, C, K, R, V <= 10000).

    // Output
    // Output the maximum number of patties Petya can cook.

    // Sample test(s)

    // Input
    // 3000 1000 500
    // 30 15 60

    // Output
    // 8    



    // Answer:
    int P, M, C, K, R, V;

    cout << "Enter the amount of flour (in grams): ";
    cin >> P;

    cout << "Enter the amount of milk (in milliliters): ";
    cin >> M;

    cout << "Enter the amount of cabbage (in grams): ";
    cin >> C;

    cout << "Enter the amount of flour needed for one patty (in grams): ";
    cin >> K;
    
    cout << "Enter the amount of milk needed for one patty (in milliliters): ";
    cin >> R;

    cout << "Enter the amount of cabbage needed for one patty (in grams): ";
    cin >> V;

    int PK = P / K;
    int MR = M / R;
    int CV = C / V;

    int patties = min({PK, MR, CV});
    cout << "The maximum number of patties Petya can cook is: " << patties << endl;





    return 0;

    
}