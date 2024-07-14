#include <iostream>
#include <iomanip>
using namespace std;

typedef struct employers
//typedef kisi b name ko apni marzi ka name dena ka lya use hota ha.jasa hm na 'struct employers ' ko nan ka name da deya..
{
    string nameofff;
    int date;
    float sallery;
    char descriptions;
}nan;

int main(){
    nan mansoor;
    mansoor.descriptions='s';
    mansoor.date = 2021;
    cout<<"the value is "<<mansoor.descriptions<<endl;

    return 0;
}