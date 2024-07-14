#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age ";cin>>age;
    switch (age)
    {
    case 18:
        cout<<"You are not eligible for this post..";
        break;
    
    default:
    cout<<"No special case is found for this"
        break;
    }
    return 0;
}