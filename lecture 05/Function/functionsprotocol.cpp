#include <iostream>
#include <iomanip>
using namespace std;


//If we run this program it gives error because function is not displaying. so we use function protocol and we decribe the compailer that we are going to use this function so it did not give error to us...

int mansoor(int ,int );     //---->This methods is acceptable
//int mansoor(int a,int b);   //---->This methods is acceptable
//int mansoor(int a, b);     //---->This methods is not acceptable

int main(){
    int num1, num2;
    cout<<"Enter the value of first number "<<endl;
    cin>>num1;
     cout<<"Enter the value of second number "<<endl;
     cin>>num2;
    cout<<"The sum of num1 and num2 is "<<mansoor(num1, num2);    
    return 0;
}

int mansoor(int a, int b){
    int c = a + b;
    return c;
}