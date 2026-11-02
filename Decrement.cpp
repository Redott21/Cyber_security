#include <bits/stdc++.h>
using namespace std;

class Number{
    int value;
    public:
    Number(int v){
        value =v;
    }
    void operator-(){
        value= -value;
    }
    void show(){
        cout<<"Value="<<value<<endl;
        
    }
};
 int main()
 {
     Number n(10);
     n.show();
     
     -n;
     n.show();
     
     return 0;
 }