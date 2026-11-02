#include <bits/stdc++.h>
using namespace std;

int main() {
    int Stack[5];
    int Top = -1;   

    

    if (Top == -1) {
        cout << "Stack is underflow" << endl;
    } else {
       
        cout << Stack[Top] << endl;
        Top--;
    }

    return 0;
}