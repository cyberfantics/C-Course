#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"entr the value of num1 ";
    cin>>a;
    cout<<"\nEntr the value of num2 ";
    cin>>b;
    cout<<"\nYour chosen numbers are "<<a<<" and "<<b;
    c = a + b;
    d = a - b;
    cout<<"\n The value of a + b is "<<c<<" and the value of a - b is "<<d;
    int e = c;
    c = d;
    d = e;
    cout<<"\n Now The value of a + b is "<<c<<" and the value of a - b is "<<d;   
    return 0;
}