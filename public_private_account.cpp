#include<iostream>
using namespace std;
class account
{
    public:
    void withdraw(){
        cout<<"withdraw with Standard rules:";
        
    }
};
class savingaccount : public account
{
    
     void withdraw(){
         cout<<"withdraw with saving account";
     }    
};
int main()
{
    savingaccount sa;
    sa.withdraw();
    account*a =&sa;
    a->withdraw();
}