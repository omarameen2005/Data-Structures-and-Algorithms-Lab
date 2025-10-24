#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    // Q11
    // There are N integers (1<=N<=65537) A1, A2,.. AN (0<=Ai<=10^9). You need to find amount of such pairs (i, j) that 1<=i<j<=N and A[i]>A[j].

    // Input
    // The first line of the input contains the number N. The second line contains N numbers A1...AN.

    // Output
    // Write amount of such pairs.

    // Sample test(s)

    // Input
    // 5
    // 2 3 1 5 4

    // Output
    // 3    



    // Answer:
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    int amount = 0; 

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                amount++;
            }
        }
    }

    cout << "The number of such pairs is: " << amount << endl;



    return 0;

    
}