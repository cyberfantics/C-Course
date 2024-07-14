#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    string name;
    cout<<"\n\n\t\t\t\t\t\tYour name is..";
    cin>>name;
    cout<<"\n\t\t\t\tHello "<<name<<" ,Now we are checking your age.. ";
    int age;
    cout<<"\n\nEnter a positive integer for checking your age ";
    cin>>age;
    if ((age<17)&&(age>1))
    {
        
        cout<<"\n"<<name<<" to bht kamina insan hain jara apni age galat das rya hain..";
    }

    else if(age==17){
        cout<<"\n"<<name<<" to aik gatya insan hain..";
    }
    
    else if(age<1){
        cout<<"\n"<<name<<" Mubarik ho ap abi pada b nhi hoa..";
    }

    else if(age==18){
        cout<<"\n" <<name<<"Gadha phla btata hoa taklef hote the ,jo guma pirha kr bat kr rha tha..";
    }

    else if(age>=45){
        cout<<"\n"<<"Shabash "<<name<<" ,yani apna abu the we pahla pada hoya aaien to..";
    }

    else{
        cout<<"\nGadha insan main tuj sa age posh ra hon or tm kya bkwas kr rha ho..";
    }
    return 0;
}