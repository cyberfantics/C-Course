#include <iostream>
using namespace std;
int c=67;
int main(){
    int a,b,c;
    cout<<"Put the value of a:-  ";
    cin>>a ;
    cout<<"\n Put the value of b:-  ";
    cin>>b ;
    c = a+b;
    cout<<"\n The sum of a+b is:- ";
    cout<<c;
     cout<<"\n The value of global c is:- ";
    cout<<::c;//If we want to print global variable in local variable then we use scope resolution operator whose symbol is ::

}