#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    int b;
    char op;   
    
    cout << "Enter two numbers: " << endl ;
    cin >> a;
    cin >> b;
    
    cout << "Choose the Arithmetic operation to be performed (+, -, *, /): " << endl;
    cin >> op;
    
    if (op == '+') {
        cout << "Result: " << a + b;
    }
    else if (op == '-') {
        cout << "Result: " << a - b;
    }
    else if (op == '*') {
        cout << "Result: " << a * b;
    }
    else if (op == '/') {
        if (b != 0)
            cout << "Result: " << a / b;
        else
            cout << "Error: Division by zero!";
    }
    else {
        cout << "Invalid operator!";
    }
    
    return 0;
}