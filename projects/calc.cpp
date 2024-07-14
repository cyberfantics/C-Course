#include <iostream>
#include <iomanip>
using namespace std;

int main(){
   float a ,b; 
   char e;
    cout<<"Put your operator +, -, *, /, ";
    cin>>e;
    cout<<endl<<"Put first value \n\n";
    cin>>a;
    cout<<endl<<"Put second value \n\n";
    cin>>b;
    switch (e)
    {
    case '+':
        cout<<"\t\t\t"<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;

    case '*':
        cout<<"\t\t\t"<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;  

    case '-':
        cout<<"\t\t\t"<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;

    case '/':
        cout<<"\t\t\t"<<a<<" / "<<b<<" = "<<a/b<<endl;
        break;
    default:
        cout<<"\t\t\t\t"<<"Hey, there is no such case for this operator,\n\t\t\t\t Please wait until we upgrade our calculator for such calculations.\n\t\t\t\tThanks for your cooperation....";
        break;
    }
    
    return 0;
}