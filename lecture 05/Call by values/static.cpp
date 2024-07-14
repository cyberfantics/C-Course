#include <iostream>
#include <iomanip>
using namespace std;

int mansoor(int a, int b){
    static int c = 0;
    c = c + 1;
    return a * b + c;
}
int main(){
    int num1 ,num2;
    cout<<"Here the values are going in series and added number one by one.because we give the value c = c + 1...";
    cout<<"\n\nEnter the value of num 1 "<<endl;
    cin>>num1;
    cout<<"\n\nEnter the value of num 2 "<<endl;
    cin>>num2;
    cout<<"\n\nThe values are "<<mansoor(num1,num2);
    cout<<"\n\nThe values are "<<mansoor(num1,num2);
    cout<<"\n\nThe values are "<<mansoor(num1,num2);
    return 0;
}