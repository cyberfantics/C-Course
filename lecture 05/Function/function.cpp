#include <iostream>
#include <iomanip>
using namespace std;

//functions declaring in cpp,
// in cpp we declare function by using int command,here a and b taking the values from num1 and num2.
int mansoor(int a, int b){
    int c = a + b;
    return c;
}

int main(){
    int num1, num2;
    cout<<"Enter the value of first number "<<endl;
    cin>>num1;
     cout<<"Enter the value of second number "<<endl;
     cin>>num2;
    cout<<"The sum of num1 and num2 is "<<mansoor(num1, num2);    
    return 0;
}