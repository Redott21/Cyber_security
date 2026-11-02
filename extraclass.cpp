#include <bits/stdc++.h>
using namespace std;

class Rectangle {
private:
    double length, width;
public:
    void set(double l, double w);  
    double area();
};

double Rectangle::area() {
    return length * width;  
}

void Rectangle::set(double l, double w) {  
    length = l;   
    width = w;    
}

int main() {
    Rectangle r;
    r.set(5.0, 3.0);
    cout << "Area:" << r.area();
    return 0;
}