#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
using namespace std;

int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC  
    
    


    // Q20
    // It is not easy to prepare a problem for a programming contest. Petya and Vasya decided that problem "A+B" needs at least n distinct solutions to be written. It doesn't matter how many solutions each of them will write, they need to write at least n solutions in total. We know that Petya needs t1 units of time to write a solution, and Vasya needs t2 units of time. They start to work simultaneously at time 0. Thus, for example, Petya finishes writing his first solution at time t1, his second solution at 2 · t1 and so on.

    // Petya and Vasya are working by the same algorithm. Each time Petya (Vasya) finishes writing a solution, he checks on how many solutions have already been written up to the current time moment t. Ready solutions are the solutions that have been fully written by this time. The solutions that were fully finished exactly at time t are also considered ready. If the number of such solutions is strictly less than n, then Petya (Vasya) starts writing the next solution. If a member of the jury began working on a problem, he doesn't stop working under any circumstances, and he will surely finish it.

    // Petya and Vasya realize that if they act on this algorithm, they will not necessarily write exactly n solutions in total. Maybe they'll write more solutions.

    // Considering that Petya and Vasya work non-stop, find, how many solutions they wrote in total and the moment when the latest solution was finished. The latest solution is one which was finished last.

    // Input
    // The only input line contains three integers n, t1 and t2 (1 ≤ n, t1, t2 ≤ 5000).

    // Output
    // Print two integers — m and f, where m is the number of written solutions, and f is the moment when the last solution was finished.

    // Example(s)
    // sample input
    // sample output
    // 5 2 3
    // 5 6

    // sample input
    // sample output
    // 5 2 4
    // 6 8

    // sample input
    // sample output
    // 3 30 50
    // 4 100    





    // Answer:
    // int n;
    // int t1, t2;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // cout << "Enter the value of t1: ";
    // cin >> t1;
    // cout << "Enter the value of t2: ";
    // cin >> t2;
    
    // int countA = 0;
    // int time1 = 0;     
    // int time2 = 0;      
    // int lastFinish = 0; 

    // while (countA < n) {
    //     if (time1 + t1 < time2 + t2) {
    //         time1 += t1;
    //         countA++;
    //         lastFinish = time1;
    //     } 
    //     else if (time2 + t2 < time1 + t1) {
    //         time2 += t2;
    //         countA++;
    //         lastFinish = time2;
    //     } 
    //     else {
    //         time1 += t1;
    //         time2 += t2;
    //         countA += 2; 
    //         lastFinish = time1;
    //     }
    // }

    // cout << "Total number of solutions written: " << countA << endl;
    // cout << "Time when last solution finished: " << lastFinish << endl;


    return 0;

    
}