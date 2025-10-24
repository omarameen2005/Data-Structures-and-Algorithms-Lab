#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC

     // Q5
    // There is sequence 1, 12, 123, 1234, ..., 12345678910, ... . Given first N elements of that sequence. 
    // You must determine amount of numbers in it that are divisible by 3.
    // Input
    // Input contains N (1<=N<=231 - 1).
    // Output
    // Write answer to the output.

    // Sample Input
    // 4
    // Sample Output
    // 2    




    // Answer:
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    string sum = "1";
    int count = 0;

    for (int i = 2; i <= n; i++){
        sum += to_string(i);
        if (stoi(sum) % 3 == 0){
            count++;
        }
    }

    cout << "The concatenated string is: " << sum << endl;
    cout << "The count of numbers divisible by 3 is: " << count << endl;



    return 0;

}