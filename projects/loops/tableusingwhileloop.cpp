#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,c=1,limit;
    cout<<"\n\t\t\tPrint a table using while loop";
    cout<<"\n\t\t\tenter a positive integer: ";
    cin>>a;
    cout<<"\n\t\t\tenter a limit: ";
    cin>>limit;
    while (c<=limit)
    {
        cout<<a<<setw(2)<<" * "<<setw(2)<<c<<" = "<<setw(2)<<c*a<<endl;
        c++;
    }
    
    return 0;
}