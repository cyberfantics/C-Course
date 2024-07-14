#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int a)
{
    if (a<2)
    {
        return 1;
    }
    else
    {
         return a * factorial(a - 1);
    }
}
int main(){
    int x;
    cout <<"Enter a number whose factorial is required ";
    cin>>x;
    cout<<"The factorial of "<<x <<" is "<<factorial(x);
    return 0;
}