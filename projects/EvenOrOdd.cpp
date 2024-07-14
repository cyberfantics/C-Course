#include <iostream>
using namespace std;

int main ()
{
   int n;
   cout<<"\n\n\n\t\t\t\t\t\t\t Check the number whether it is even or odd";
   cout<<"\n\n Enter the number\n\t\t\t";
   cin>>n;

   if(n%2==0){
       cout<<"\n\t\t\t\t\t\t\t Your given number is even";
   }
    else if(n%2!=0){
       cout<<"\n\t\t\t\t\t\t\t Your given number is odd";
   }  
   return 0;
}