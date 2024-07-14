#include <iostream>
using namespace std;

int main()
{
    //these are some examples of logical opperator
    int a=5,b=4;
    //logical and operator
    //If both values are true then it print true otherwise it print false
    cout <<"This is the example of logical and operator "<<((a==b)&&(a>b))<<endl;

    //logical or operator
    //If one values is true then it print true
    cout <<"This is the example of logical or operator "<<((a==b)||(a>b))<<endl;

     //logical not operator
    //If one values is true then it print true
    cout <<"This is the example of logical not operator "<<(!(a==b))<<endl;

    return 0;
}
