#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int a=5;
    const float b=588.7;
    const char c='5';
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;

//there are two mainipulators endl and iomanip 
    cout<<"The value of a is with setw "<<setw(5)<<a<<endl;
    cout<<"The value of b is with setw "<<setw(0)<<b<<endl;
    cout<<"The value of c is with setw "<<setw(5)<<c<<endl;
    return 0;
}