#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &a, int &b)
{
    int c = a;
        a = b;
        b = c;
}
void sawap(int &c , int &d ){
    int r = c;
    c = d;
    d = r;
}

int main()
{
    int x = 5;
    int y = 7;
    swap(x , y);
        cout <<"The value of a is"<<x<<" And the value of b is "<<y;
int m = 6;
int n =7;
        sawap( m , n);
         cout <<"The value of c is"<<m<<" And the value of d is "<<n;
    return 0;

    
}

