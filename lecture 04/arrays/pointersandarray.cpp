#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // int marks[]={23,45,67,54};
    // int* p= marks;
    // cout<<"The value of num1 is "<<*(p)<<endl;
    // cout<<"The value of num2 is "<<*(p+1)<<endl;
    // cout<<"The value of num3 is "<<*(p+2)<<endl;
    // cout<<"The value of num4 is "<<*(p+3)<<endl;

    int marks[]={2,3,4,5,6};
    int* p=marks;
    cout<<"The value of this number is :- "<<*(p++)<<endl;
    cout<<"The value of this number is :- "<<*(++p)<<endl;
    return 0;
}