#include <iostream>
#include <iomanip>
using namespace std;

//we swap two numbers by using pointers,we change these numbers by call by refrence methods..
void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b =  temp;

}
int main(){
    int num1=5, num2= 6;
    
    swap(&num1 ,&num2);
    cout<<"The value of num1 is "<<num1<<"\n The value of num2 is "<<num2;

    return 0;
}