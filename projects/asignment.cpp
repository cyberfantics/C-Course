#include <iostream>
using namespace std;

int main ()
{
    int num1,num2,num3,num4,a,b,c,d,e,f,g;
    
    
    cout<<"Enter the value of num1 ";cin >>num1 ;
    cout<<"\n Enter the value of num2 ";cin >>num2 ;
    cout<<"\n Enter the value of num3 ";cin >>num3 ;
    cout<<"\n Enter the value of num4 ";cin >>num4 ;

        a=num1<num2;
        //b=num3+num4;
        c=a+b;
    
    cout<<"\n the sum of num1+num2 is "<<a<<"\n the sum of num3+num4 is "<<b<<"\n the sum of num1+num2+num3+num4 is "<<c;

  cout<<"\n\n the Answer of (num1+num2)-(num3+num4) is "<<a-b;
  cout<<"\n\n the Answer of (num1+num2)*(num3+num4) is "<<a*b;
    return 0;
}