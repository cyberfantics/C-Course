#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,c=1;
    a=6;
    cout<<"\n\n\t\t\t\t\t\tPrint the table of 6 using do while loop";
    do
    {
        cout<<"\n\n\t\t\t\t\t\t"<<a<<setw(2)<<setw(2)<<"*"<<setw(2)<<c<<"="<<setw(2)<<a*c<<endl;
        c++;
        
    } while (c<=10);
    
    return 0;
}