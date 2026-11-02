#include<iostream>
using namespace std;

class account
{
public:
    void withdraw() {
        cout << "withdraw with Standard rules:" << endl;
    }
};

class savingaccount : public account
{
public:   
    void withdraw() {
        cout << "withdraw with saving account limits" << endl;
    }    
};

int main()
{
    savingaccount sa;
    sa.withdraw();
    
    account* a =&sa;
    a->withdraw();
    
    return 0;
}