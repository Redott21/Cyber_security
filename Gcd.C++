#include <iostream>
using namespace std;

int gcd(int a , int b)
{
   if( b == 0){
       
      return a;
      return gcd( b,a%b );
       
   }
}
    int main()
    {
         int num1;
         int num2;
         
         cout<< "Enter number num1"<<endl;
         cin>> num1;
         cout<< "Enter number num2"<<endl;
         cin>> num2;
         
         cout<<gcd(num1,num2);
         return 0;  
    }
    