#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <cmath>
#include <numeric>
using namespace std;
int main(){
   
    // CodeForces Question Link: https://codeforces.com/problemsets/acmsguru?order=BY_SOLVED_DESC



    // Q1
    // The Fibonacci sequence of numbers is known: F1 = 1; F2 = 1; Fn+1 = Fn + Fn-1, for n>1. You have to find S - the sum of the first K Fibonacci numbers.
    // Input
    // First line contains natural number K (0<K<41).
    // Output
    // First line should contain number S.

    // Sample Input
    // 5
    // Sample Output
    // 12    


    // Answer:
    // int k;
    // int S = 0;
    // int a = 1, b = 1;
    // int c = a + b;

    // cout << "Enter the value of K: ";
    // cin >> k;
    // for (int i = 1; i <= k; i++){
    //     if (i == 1 || i == 2){
    //         S += 1;
    //     }
    //     else{
            
    //         S += c;
    //         a = b;
    //         b = c;
    //     }
    // }

    // cout << "The sum of the first " << k << " Fibonacci numbers is: " << S << endl;






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
    // int a, b;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;

    // int ans = (pow(a, b)) - (pow(b, a));
    // cout << "The value of a^b - b^a is: " << ans << endl;




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
    // int x;
    // cout << "Enter the value of x: ";
    // cin >> x;
    // double n = 2*x+1;
    // cout << "The answer is: " << n << endl;






    // Q4
    // For given integer N (1<=N<=104) find amount of positive numbers not greater than N that coprime with N. Let us call two positive integers 
    // (say, A and B, for example) coprime if (and only if) their greatest common divisor is 1. (i.e. A and B are coprime iff gcd(A,B) = 1).
    // Input
    // Input file contains integer N.
    // Output
    // Write answer in output file.

    // Sample Input
    // 9
    // Sample Output
    // 6    



    // Answer:
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int sum = 0;
    
    // for(int i = 1; i < n; i++){
    //     if (__gcd(i, n) == 1){
    //         sum += 1;
    //     }
    // }

    // cout << "The sum of all integers less than " << n << " that are coprime to " << n << " is: " << sum << endl;







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
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // string sum = "1";
    // int count = 0;

    // for (int i = 2; i <= n; i++){
    //     sum += to_string(i);
    //     if (stoi(sum) % 3 == 0){
    //         count++;
    //     }
    // }

    // cout << "The concatenated string is: " << sum << endl;
    // cout << "The count of numbers divisible by 3 is: " << count << endl;







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
//     string s;
//     cout << "Enter the string: ";
//     cin >> s;

//     if (s.size() >= 2 && (s.substr(s.size() - 2) == "ch")) {
//         s += "es";
//     }
//     else if (!s.empty() && (s.back() == 'o' || s.back() == 's' || s.back() == 'x')) {
//         s += "es";
//     }
//     else if (!s.empty() && s.back() == 'y' ) {
//         s = s.substr(0, s.size() - 1);
//         s += "ies";
//     }
//     else if (!s.empty() && s.back() == 'f') {
//         s = s.substr(0, s.size() - 1);
//         s += "ves";
//     }
//     else if (s.size() >= 2 && s.substr(s.size() - 2) == "fe") {
//         s = s.substr(0, s.size() - 2);
//         s += "ves";
//     }
//     else {
//         s += "s";
//     }

//    cout << "The plural form is: " << s << endl;





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
//     int a, b;
//     string x = to_string(a);
//     string y = to_string(b);
//     cout << "Enter the first 4-digit number: ";
//     cin >> a;
//     cout << "Enter the second 4-digit number: ";
//     cin >> b;
//     int bulls = 0;
//     int cows = 0;
//     for (int i = 0; i < 4; i++) {
//         if (a % 10 == b % 10) {
//             bulls++;
//         }
//         else {
//             for (int j = 0; j < 4; j++) {
//                 if (x[i] == y[j]) {
//                     cows++;
//                 }
//             }
//         }
//         a /= 10;
//         b /= 10;
//     }

//    cout << "Bulls: " << bulls << ", Cows: " << cows << endl;





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
    // int arr1[3];
    // int arr2[3];
    // int arr3[3];
    
    // cout << "Enter the first set of 3 integers: ";
    // for (int i = 0; i < 3; i++) {
    //     cin >> arr1[i];
    // }

    // cout << "Enter the second set of 3 integers: ";
    // for (int i = 0; i < 3; i++) {
    //     cin >> arr2[i];
    // }

    // cout << "Enter the third set of 3 integers: ";
    // for (int i = 0; i < 3; i++) {
    //     cin >> arr3[i];
    // }

    // sort(arr1, arr1 + 3);
    // sort(arr2, arr2 + 3);
    // sort(arr3, arr3 + 3);

    // int med1 = arr1[1];
    // int med2 = arr2[1];
    // int med3 = arr3[1];

    // int medians[3] = {med1, med2, med3};
    // sort(medians, medians + 3);

    // cout << "Median of medians: " << medians[1] << endl;





    // Q9
    // Masha loves Petya. The following question gives her no rest: does Petya love her too? The best way to find this out is a fortune-telling. There are plenty ways of fortune predicting, but Masha prefers fortune-telling with camomile more than others. It's rules are simple. You should take camomile into the right hand and start picking petals one by one. After each petal you should pronounce one phrase from the predefined list. Such phrases like "loves", "doesn't love", "loves sincerely", "doubts", "wants to date", "laughs" are usually used. Phrases are pronounced from the first to the last. The list of phrases is cyclic, so after the last phrase you should pronounce the first one. The phrase that you pronounce after the last petal will be an answer.

    // Since Masha doesn't want to go to the forest and look for camomiles, she asks you to write the program which will simulate the process.

    // Input
    // First line of the input file contains two integer numbers N and M (1 ≤ N ≤ 100, 1 ≤ M ≤ 100), the number of petals and the number of phrases. Each of the following M lines contains one phrase. Phrases consist only of latin letters and their lengths are between 1 and 100.

    // Output
    // Output the resulting phrase.

    // Example(s)
    // sample input
    // sample output
    // 6 4
    // loves
    // doesnt
    // sincerely
    // doubts
    // doesnt

    // sample input
    // sample output
    // 9 3
    // loves
    // doesnt
    // hates
    // hates    


    
    // Answer:
    // int n, m;
    
    // cout << "Enter the number of petals: ";
    // cin >> n;
    // cout << "Enter the number of phrases: ";
    // cin >> m;
    // string s[m];

    // for (int i = 0 ; i < m; i++){
    //     cout << "Enter the phrase: ";
    //     cin >> s[i];
    // }

    // for (int i = 0; i < n; i++){
    //     if (i == n-1){
    //         cout << "The resulting phrase is: " << s[i % m] << endl;
    //     }
    // }







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
    // int P, M, C, K, R, V;

    // cout << "Enter the amount of flour (in grams): ";
    // cin >> P;

    // cout << "Enter the amount of milk (in milliliters): ";
    // cin >> M;

    // cout << "Enter the amount of cabbage (in grams): ";
    // cin >> C;

    // cout << "Enter the amount of flour needed for one patty (in grams): ";
    // cin >> K;
    
    // cout << "Enter the amount of milk needed for one patty (in milliliters): ";
    // cin >> R;

    // cout << "Enter the amount of cabbage needed for one patty (in grams): ";
    // cin >> V;

    // int PK = P / K;
    // int MR = M / R;
    // int CV = C / V;

    // int patties = min({PK, MR, CV});
    // cout << "The maximum number of patties Petya can cook is: " << patties << endl;





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
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;
    // int arr[n];
    // int amount = 0; 

    // cout << "Enter the elements of the array: ";
    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (arr[i] > arr[j]) {
    //             amount++;
    //         }
    //     }
    // }

    // cout << "The number of such pairs is: " << amount << endl;






    // Q12(Unsolved)
    // You task is to find minimal natural number N, so that N! contains exactly Q zeroes on the trail in decimal notation. As you know N! = 1*2*...*N. For example, 5! = 120, 120 contains one zero on the trail.

    // Input
    // One number Q written in the input (0<=Q<=10^8).

    // Output
    // Write "No solution", if there is no such number N, and N otherwise.

    // Sample test(s)

    // Input
    // 2

    // Output
    // 10  


    // Answer:







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
    // int a, b, c;
    // int x1,x2, y1,y2;
    // int amount = 0;
    // cout << "Enter the value of a: ";
    // cin >> a;
    // cout << "Enter the value of b: ";
    // cin >> b;
    // cout << "Enter the value of c: ";
    // cin >> c;
    // cout << "Enter the value of x1: ";
    // cin >> x1;
    // cout << "Enter the value of x2: ";
    // cin >> x2;
    // cout << "Enter the value of y1: ";
    // cin >> y1;
    // cout << "Enter the value of y2: ";
    // cin >> y2;

    // for (int x = x1; x <= x2; x++){
    //     for (int y = y1; y <= y2; y++){
    //         if (a*x + b*y + c == 0){
    //             amount++;
    //         }
    //     }
    // }
    
    // cout << "Number of solutions found: " << amount << endl;





    // Q14
    // Find all pairs of prime numbers (A, B) such that A<=B and their sum is also a prime number and does not exceed N.

    // Input
    // The input of the problem consists of the only integer N (1<=N<=10^6).

    // Output
    // On the first line of the output file write the number of pairs meeting the requirements. Then output all pairs one per line (two primes separated by a space).

    // Sample test(s)

    // Input
    // 4

    // Output
    // 0    




    // Answer:
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int countprimes = 0;
    // int arr[1000];
    // int countpairs = 0;

    // for (int i =2; i <= n; i++){
    //     bool isPrime = true;
    //     for (int j = 2; j < i; j++){
    //         if (i % j == 0){
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime){
    //         countprimes++;
    //         arr[countprimes] = i;
    //     }
    // }
    
    // for (int a = 0; a < countprimes; a++){
    //     for (int b = 0; b < countprimes; b++){
    //         if (arr[a] <= arr[b] && arr[a] + arr[b] <= n){
    //             int sum = arr[a] + arr[b];
    //             bool isPrimeSum = true;
    //             for (int j = 2; j < sum; j++){
    //                 if (sum % j == 0){
    //                     isPrimeSum = false;
    //                     break;
    //                 }
    //             }
    //             if (isPrimeSum){
    //                 cout << "\nThe pair is: " << arr[a] << " " << arr[b] << endl;
    //                 countpairs++;
                    
    //             }
    //         }
    //     }
    // }

    // cout << "\nNumber of prime pairs with prime sums: " << countpairs << endl;






    // Q15
    // Nearly prime number is an integer positive number for which it is possible to find such primes P1 and P2 that given number is equal to P1*P2. There is given a sequence on N integer positive numbers, you are to write a program that prints “Yes” if given number is nearly prime and “No” otherwise.


    // Input

    // Input file consists of N+1 numbers. First is positive integer N (1£N£10). Next N numbers followed by N. Each number is not greater than 109. All numbers separated by whitespace(s).


    // Output

    // Write a line in output file for each number of given sequence. Write “Yes” in it if given number is nearly prime and “No” in other case.


    // Sample Input

    // 1
    // 6
    // Sample Output

    // Yes    





    // Answer:
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int countprimes = 0;
    // int arr[1000];
    // bool found = false;

    // for (int i = 2; i <= n; i++) {
    //    bool isPrime = true;
    //      for (int j = 2; j < i; j++) {
    //         if (i % j == 0) {
    //             isPrime = false;
    //             break;
    //         }
    //      }
    //      if (isPrime) {
    //         arr[countprimes] = i;
    //         countprimes++;
            
    //     }
    // }


    // for (int a = 0; a < countprimes; a++){
    //     for (int b = 0; b < countprimes; b++){
    //         if (arr[a] * arr[b] == n){
    //             found = true;
    //         }
    //     }
    // }

    // if (!found) {
    //     cout << "NO.";
    // }else {
    //     cout << "Yes";
    // }






    // Q16
    // Andrew has just made a breakthrough in sociology: he realized how to predict whether two persons will be good friends or not. It turns out that each person has an inner friendship number (a positive integer). And the quality of friendship between two persons is equal to the greatest common divisor of their friendship number. That means there are prime people (with a prime friendship number) who just can't find a good friend, andWait, this is irrelevant to this problem. You are given a list of friendship numbers for several people. Find the highest possible quality of friendship among all pairs of given people.
    // Input
    // The first line of the input file contains an integer n () — the number of people to process. The next n lines contain one integer each, between 1 and  (inclusive), the friendship numbers of the given people. All given friendship numbers are distinct.
    // Output
    // Output one integer — the highest possible quality of friendship. In other words, output the greatest greatest common divisor among all pairs of given friendship numbers.
    // Example(s)
    // sample input
    // sample output
    // 4
    // 9
    // 15
    // 25
    // 16
    // 5    





    // Answer:
    // int n;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // int arr[n];
    // int maximum = 0;
    // for (int i = 0; i < n; i++) {
    //     cout << "Enter element " << i + 1 << ": ";
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < n; i++) {
    //     for (int j = i+1; j < n; j++) {
    //         if (__gcd(arr[i], arr[j]) > maximum) {
    //             maximum = __gcd(arr[i], arr[j]);
    //         }
    //     }
    // }

    // cout << "Maximum GCD found: " << maximum << endl;





    // Q17
    // Famous Berland ACM-ICPC team Anisovka consists of three programmers: Andrew, Michael and Ilya. A long time ago, during the first few months the team was founded, Andrew was very often late to the trainings and contests. To stimulate Andrew to be more punctual, Ilya and Andrew decided to introduce a new rule for team participants. If somebody is late (i.e. comes at least one second after appointed time) he owes a cup of tea to other team members. If he is late for 5 minutes, he owes two cups of tea. If he is late for 15 minutes, he owes three cups of tea. And if he is late for 30 minutes or more, he owes 4 cups of tea.
    // The training starts at the time S (counted in seconds, from some predefined moment of time) and Andrew comes at the time P (also in seconds, counted from the same moment of time).
    // Your task is to find how many cups of tea Andrew owes.

    // Input
    // The input file contains single line with integer numbers S and P (0 <= S,P <= 10^4).

    // Output
    // Write to the output file the number of cups Andrew owes.

    // Sample test(s)

    // Input
    // Test #1
    // 10 10

    // Test #2
    // 10 11

    // Test #3
    // 0 300

    // Output
    // Test #1
    // 0

    // Test #2
    // 1

    // Test #3
    // 2    




    // Answer:
    // int S, P;
    // cout << "Enter the value of S: ";
    // cin >> S;
    // cout << "Enter the value of P: ";
    // cin >> P;

    // if (P - S == 0){
    //     cout << 0 << endl;
    // }else if (P - S > 0 && P - S < 300){
    //     cout << 1 << endl;
    // }else if (P - S >= 300 && P - S < 900){
    //     cout << 2 << endl;
    // }else if (P - S >= 900 && P - S < 1800){
    //     cout << 3 << endl;
    // }else{
    //     cout << 4 << endl;
    // }








    // Q18(Unsovlved)
    // For given number N you must output amount of N-digit numbers, such, that last digits of their square is equal to 987654321.


    // Input

    // Input contains integer number N (1<=N<=106)


    // Output

    // Write answer to the output.


    // Sample Input

    // 8
    // Sample Output

    // 0    





    // Answer:








    // Q19(Unsolved)
    // Inspired by a "Little Bishops" problem, Petya now wants to solve problem for rooks.

    // A rook is a piece used in the game of chess which is played on a board of square grids. A rook can only move horizontally and vertically from its current position and two rooks attack each other if one is on the path of the other.

    // Given two numbers n and k, your job is to determine the number of ways one can put k rooks on an n × n chessboard so that no two of them are in attacking positions.

    // Input

    // The input file contains two integers n (1 ≤ n ≤ 10) and k (0 ≤ k ≤ n2).

    // Output

    // Print a line containing the total number of ways one can put the given number of rooks on a chessboard of the given size so that no two of them are in attacking positions.

    // Sample test(s)

    // Input
    // 4 4

    // Output
    // 24    





    // Answer:
    // int n, k;
    // cout << "Enter the value of n: ";
    // cin >> n;
    // cout << "Enter the value of k: ";
    // cin >> k;
    // int arr[n][n];
    // int count = 0;
    // bool unique = true;

    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         arr[i][j] = 0;
    //     }
    // }









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









    // Q21(unsolved)







    // Answer:
    // int N,M;
    // cout << "Enter the value of N: ";
    // cin >> N;
    // cout << "Enter the value of M: ";
    // cin >> M;
    // int start;

    // if (M == 1){
    //     start = 1;
    //     for(int i = start; i<=N; i++){
    //         if (start >= N){
    //             cout << "The answer is: " << i << endl;
    //             break;
    //         }
    //         start = start * 2;
    //     }

    // }





    
    




    return 0;
}