#include <iostream>
using namespace std;

// prototype
// queue implementation
// Stack implementation

class Stack{
    int top;
    int size;
    int *arr;

    public:
    
    Stack(int s){
        size = s;
        arr = new int[size];
        top = -1;
    }

    void push(int x){
        if ( top == (size-1)){
            cout << "Stack Overflow" << endl;
        }
        else{
            arr[++top] = x;
        }
    }

    int pop(){
        if(top == -1){
            cout << "Stack Underflow" << endl;
            return -1;
        }else{
            return arr[top--];
        }
    }


    int topval(){
        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }else{
            return arr[top];
        }
    }

    bool isEmpty(){
        return top == -1;
    }

    bool isFull(){
        return top == (size-1);
    }
};




class Queue{
    int size=10;
    int arr[10];
    int r,f=-1;
    public:
    Queue(){
            
    }
    int enq(int x){
        if( f > r && r==0 && f == (size-1)){
            return -1;
        }else if(r=f=0 || (f>r && f<(size-1))){

        }
    }
};


int main(){
    // Stack s1(5);
    // s1.push(5);
    // s1.push(7);
    // cout << s1.topval() << endl;
    // s1.pop();
    // cout << s1.topval() << endl;
    // s1.pop();
    // cout << s1.topval() << endl;
    // cout << s1.isEmpty() << endl;
    // cout << s1.isFull() << endl; 


    // Ex1
    // Given a string str, the task is to reverse it using stack. 
    // Example:
    // Input: s = "GeeksQuiz"
    // Output: ziuQskeeG

    // Input: s = "abc"
    // Output: cba    


    // Answer
    // string s;
    // cout << "Enter a string "<< endl;
    // cin >> s;
    // Stack s1(s.length());

    // for (char c : s){
    //     s1.push(c);
    // }

    // string revs = "";
    // while(!s1.isEmpty()){
    //     revs += char(s1.pop());
    // }

    // cout << "Reversed string is: " << revs << endl;

}