#include <iostream>
#include <iomanip>
using namespace std;


//If we run this program it gives error because function is not displaying. so we use function protocol and we decribe the compailer that we are going to use this function so it did not give error to us...

int mansoor(int ,int );     //---->This methods is acceptable
//int mansoor(int a,int b);   //---->This methods is acceptable
//int mansoor(int a, b);     //---->This methods is not acceptable

void g(void);   //---->This methods is acceptable
//void g();   //---->This methods is acceptable

//here we run a g() and we make a void function and run cout there.
int main(){
     g();
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

void g(){
    cout<<"\n\n\t\t\t\tHello ,Welcome in the world of programming\n\n";
}