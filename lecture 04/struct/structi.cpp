#include <iostream>
#include <iomanip>
using namespace std;

struct employers
{
    string nameofff;
    int date;
    float sallery;
    char descriptions;
};

int main(){
    struct employers one;
   cout<<"What is your name? "<<endl;
   cin> one.nameofff;
    cout<<"What is date? "<<endl;
   cin> one.date;
    cout<<"What is your sallery? "<<endl;
   cin> one.sallery;
    cout<<"Write a detailed note? "<<endl;
   cin> one.descriptions;
    return 0;
}