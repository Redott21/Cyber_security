#include <bits/stdc++.h>
using namespace std;

#define SIZE 5

int Stack[SIZE];
int Top = -1;


void push(int value) {
    if (Top == SIZE - 1) {
        cout << "Stack Overflow" << endl;   
        return;
    }
    Stack[++Top] = value;
}


void pop() {
    if (Top == -1) {
        cout << "Stack Underflow" << endl;  
        return;
    }
    cout << "Popped: " << Stack[Top] << endl;
    Top--;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);  

    pop();
    pop();
    pop();
    pop();
    pop();
    pop();     

    return 0;
}

