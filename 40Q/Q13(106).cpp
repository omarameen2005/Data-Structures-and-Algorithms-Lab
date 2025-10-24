#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    // Q13
    // There is an equation ax + by + c = 0. Given a,b,c,x1,x2,y1,y2 you must determine, how many integer roots of this equation are satisfy to the following conditions : x1<=x<=x2,   y1<=y<=y2. Integer root of this equation is a pair of integer numbers (x,y).


    // Input

    // Input contains integer numbers a,b,c,x1,x2,y1,y2 delimited by spaces and line breaks. All numbers are not greater than 108 by absolute value.


    // Output

    // Write answer to the output.


    // Sample Input

    // 1 1 -3
    // 0 4
    // 0 4
    // Sample Output

    // 4    




    // Answer:
    int a, b, c;
    int x1,x2, y1,y2;
    int amount = 0;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of c: ";
    cin >> c;
    cout << "Enter the value of x1: ";
    cin >> x1;
    cout << "Enter the value of x2: ";
    cin >> x2;
    cout << "Enter the value of y1: ";
    cin >> y1;
    cout << "Enter the value of y2: ";
    cin >> y2;

    for (int x = x1; x <= x2; x++){
        for (int y = y1; y <= y2; y++){
            if (a*x + b*y + c == 0){
                amount++;
            }
        }
    }
    
    cout << "Number of solutions found: " << amount << endl;
    


    return 0;

    
}