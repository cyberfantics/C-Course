#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout<<"\n\n\n"<<"Program to check eligiblity for complaining id card"<<endl<<endl<<endl<<endl;
    int age;
    cout<<"enter your age "<<endl;
    cin>>age;
    if((age<18)&&(age>1)){
        cout<<"You are not eligible to commplain for your id card ";
    }

    else if(age<1){
        cout<<"You are not born yet ";

    }

   else{
       cout<<"You are eligible to complain for your id card ";
   }
    return 0;

}