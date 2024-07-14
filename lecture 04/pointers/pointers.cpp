#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // What is pointers??
    // Data types which holds the address of other data types..
    // int a=3;
    // int*  b = &a;
    //Adress of the operator
    // cout<<"The address of int a is "<<&a<<endl;
    // cout<<"The address of int a is "<<b<<endl;

    //Derefrence operator
//     cout<<"The value of operator at address b is "<<*b<<endl;

//  int** c = &b;
 
 //Poiner to pointer
//     cout<<"The address of int b is "<<c<<endl;
//     cout<<"The address of int b is "<<&b<<endl;
//     cout<<"The value of operator at address c is "<<*c<<endl;
//     cout<<"The value of operator at address to address is "<<**c<<endl;

                            /*Revision*/
                            //pointer
    int a=56;
    int* b=&a;
    int** c=&b;
    cout<<"The address of a is "<<b<<endl;
    cout<<"The address of a is "<<&a<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The address of c is "<<&b<<endl;
     return 0;
}