#include <iostream>
#include <iomanip>
using namespace std;

int sppp(int a)
{
    if(a<=2)
    {
        return 1;

    }
    else
    {
        return(a-2)+(a-1);
    }
}

int main(){
    int x;
    cout<<" Enter a number ";
    cin>>x;
    cout<<"The value of "<<x<<" is "<<sppp(x);
    return 0;
}