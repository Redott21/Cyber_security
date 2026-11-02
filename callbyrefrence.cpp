#include <bits/stdc++.h>
using namespace std;

// 1. Call by Value — makes a copy, original values NOT changed
void callByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Function callByValue: a = " << a << ", b = " << b << endl;
}

// 2. Call by Address — uses pointers, original values ARE changed
void callByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "Inside Function callByAddress: *a = " << *a << ", *b = " << *b << endl;
}

// 3. Call by Reference — uses references, original values ARE changed
void callByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "Inside Function callByReference: a = " << a << ", b = " << b << endl;
}

int main()
{
    // ---------- Call by Value ----------
    int x = 10, y = 20;

    cout << "Before Function callByValue: x = " << x << ", y = " << y << endl;
    callByValue(x, y);
    cout << "After Function callByValue: x = " << x << ", y = " << y << endl;
    cout << endl;

    // ---------- Call by Address ----------
    int p = 10, q = 20;

    cout << "Before Function callByAddress: p = " << p << ", q = " << q << endl;
    callByAddress(&p, &q);
    cout << "After Function callByAddress: p = " << p << ", q = " << q << endl;
    cout << endl;

    // ---------- Call by Reference ----------
    int a = 10, b = 20;

    cout << "Before Function callByReference: a = " << a << ", b = " << b << endl;
    callByReference(a, b);
    cout << "After Function callByReference: a = " << a << ", b = " << b << endl;

    return 0;
}