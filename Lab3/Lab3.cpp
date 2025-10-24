#include <iostream>
using namespace std;

int main(){
    int x = 6;
    int * y;
    y = &x;
    cout << &x << endl;
    cout << y << endl;
    cout << *y << endl;
    cout << &y << endl;
    cout << x << endl;
}