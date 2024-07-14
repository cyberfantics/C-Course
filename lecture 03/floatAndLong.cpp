#include <iostream>
using namespace std;

int main(){
    int interger=2;
    float a = 34.5f;
    long double b = 34.5;
    char chara='a';
    bool abb='yes';
    short cffd=4;
    long cfff=5;
    cout<<"The value of a is "<<a<<"\n The value of b is "<<b;

    /*We can check the value by size of operator and prove that f & l is important when we are declaring them float or longdouble because by defaut it take the value of double.*/
   cout<<"\nThe size of opperatpor int is "<<sizeof(2);
    cout<<"\nThe size of opperatpor 34.4 is "<<sizeof(34.4);
    cout<<"\nThe size of opperatpor long is "<<sizeof(cfff);
    cout<<"\nThe size of opperatpor float is "<<sizeof(34.4f);
    cout<<"\nThe size of opperatpor short is "<<sizeof(cffd);
     cout<<"\nThe size of opperatpor bollem is "<<sizeof(abb);
    cout<<"\nThe size of opperatpor 34.4F is "<<sizeof(34.4F);
    cout<<"\nThe size of opperatpor long is "<<sizeof(34.4l);
    cout<<"\nThe size of opperatpor 34.4L is "<<sizeof(34.4L);
     cout<<"\nThe size of opperatpor chara is "<<sizeof(chara);
}
