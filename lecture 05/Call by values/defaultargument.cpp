#include <iostream>
#include <iomanip>
using namespace std;

float moneyfun(float currentmoney, float total = 1.1){
    return currentmoney * total;
}

int main(){
    int  money=1000;
    cout<<"If you invest Rs "<<money<<" Then you will get Rs."<<moneyfun(money) <<"Rs. after one year."<<endl;

    //default argument

    cout<<"If you invest Rs "<<money<<" Then you will get Rs."<<moneyfun(money,1.5) <<"Rs. after one year."<<endl;

    //Here it get the value of money and then add 5% in it because we give the value to it..
       
    return 0;
}