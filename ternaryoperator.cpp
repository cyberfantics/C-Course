#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a;
    cout<<"Give the value of number to chck even or odd ";
    cin>>a;
    string b = (a&2==0) ? "even" : "odd";
    cout<<"\nYour given number is"<<b;
    return 0;
}