#include <iostream>
#include <iomanip>
using namespace std;

struct employers
//union or struct ko use krna ka aik he tariqa ha,lakin union better memory management ka lya use hota ha.union main ap aik waqt main aik he chez use kr sakta hain.
//Thanks..
{
    string nameofff;
    int date;
    float sallery;
    char descriptions;
};

int main(){
    struct employers mansoor;
    mansoor.nameofff=mansoor;
    mansoor.descriptions='s';
    mansoor.date = 2021;
    cout<<"the value is "<<mansoor.descriptions<<endl;
    cout<<"the value is "<<mansoor.nameofff<<endl;
    return 0;
}