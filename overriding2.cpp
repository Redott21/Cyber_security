#include<iostream>
using namespace std;

class payment{
    public:
    virtual void pay(int amount){
        cout<<"Paying Rs."<< amount<<"using generic payment method"<<endl;
        
        }
};

class CreditCard : public payment{
    public:
    void pay(int amount)override{
        cout<<"Paying Rs." << amount <<"Using Credit Card"<<endl;
    }
};

class UPI : public payment{
    public:
    void pay(int amount)override{
        cout<<"Paying Rs."<< amount<< "Using UPI"<<endl;
    }
};
int main(){
    
    payment* method;
    
    CreditCard cc;
    UPI upi;
    
    method=&cc;
    method->pay(500);
    
    method =&upi;
    method->pay(200);
    
    return 0;
}