#include <iostream>
#include <iomanip>
using namespace std;

//Array by using for loop
// int main(){
//     int m[]={2,3,4,5,6};
//     int c=0;
//     for (int  i=c; i <= 4; i++)
//     {
//         cout<<"The value of "<<i<<" is:- "<<m[i]<<endl;
//     }
    

    //Array by using while loop
    // int main(){
    //     int n[]={5,57,87,9};
    //     int i=0;
    //     while (i<=3)
    //     {
    //         cout<<"The value of "<<i<<" is:- "<<n[i]<<endl;
    //         i++;
    //     }

    //Array by using do while loop 
    int main()
    {
        int a[]={21,2,23};
        int b=0;
        do{
             cout<<"The value of "<<b<<" is:- "<<a[b]<<endl;
             b++;
        }while(b<=3);
     
    
    return 0;
}