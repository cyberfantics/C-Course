#include <bits\stdc++.h>
#include <conio.h>
using namespace std;

int main(){
    float num1,num2;
    char a;
    cout<<"\n\t\t\t\tMaking a simple claculator using switch case";
    cout<<"\n\n\t\t\t\tEnter operators in one of them : +, *, -, /:\n";
    cin>>a;
        system("cls");
        cout<<"Enter two numbers :\n";
      cin>>num1>>num2;
        system("cls");
     switch (a)
         { 
        case '+':
        cout<<num1<<"+"<<num2<<"="<<num1+num2;
        getch();
        break;

         case '*':
        cout<<num1<<"*"<<num2<<"="<<num1*num2;
        getch();                
        break;

         case '-':
        cout<<num1<<"-"<<num2<<"="<<num1-num2;
        getch();
        break;

         case '/':
        cout<<num1<<"/"<<num2<<"="<<num1/num2;
        getch();       
        break;
    default:
    cout<<"Error,operator is not correct..";
        getch();   
        break;
    }
    return 0;
}