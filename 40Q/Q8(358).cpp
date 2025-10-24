#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    // Q8
    // Vasya learned definition of median of three numbers. He says, "Median of three numbers is the number located in the middle when numbers are ordered in non-descending order". Subtle Pete gave him much more difficult task. Vasya has to find median of each of three triples and then find the median of three numbers he found. Please help Vasya with the task.

    // Input
    // The input file contains three lines. Each line contains three integers. Each number is not less than -1000 and is not greater than 1000.

    // Output
    // Print one number - median of three medians.

    // Example(s)
    // sample input
    // sample output
    // 6 4 5 
    // 7 9 8 
    // 1 2 3
    // 5

    // sample input
    // sample output
    // 1 2 2 
    // 4 3 2 
    // 2 3 4
    // 3   



    // Answer:
    int arr1[3];
    int arr2[3];
    int arr3[3];
    
    cout << "Enter the first set of 3 integers: ";
    for (int i = 0; i < 3; i++) {
        cin >> arr1[i];
    }

    cout << "Enter the second set of 3 integers: ";
    for (int i = 0; i < 3; i++) {
        cin >> arr2[i];
    }

    cout << "Enter the third set of 3 integers: ";
    for (int i = 0; i < 3; i++) {
        cin >> arr3[i];
    }

    sort(arr1, arr1 + 3);
    sort(arr2, arr2 + 3);
    sort(arr3, arr3 + 3);

    int med1 = arr1[1];
    int med2 = arr2[1];
    int med3 = arr3[1];

    int medians[3] = {med1, med2, med3};
    sort(medians, medians + 3);

    cout << "Median of medians: " << medians[1] << endl;


    return 0;

    
}