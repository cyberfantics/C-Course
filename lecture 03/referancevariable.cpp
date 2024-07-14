#include <iostream>
using namespace std;
int main(){
    //refrence variable
    /*these variable are used to make a child variable for same purpose*/
    float basit = 98;
    float & Asim = basit;
    cout<<Asim;
    return 0;

}