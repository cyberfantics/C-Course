#include <iostream>
#include <iomanip>
using namespace std;
int main(){
   int a,c=1,limit;
   cout<<"\n\n\t\t\t\t\t\t\tprint table of 9 \n\n";
   a=9;
   limit=10;
   while(c<=limit){
   cout<<"\t\t\t\t"<<a<<"*"<<c<<"="<<a*c<<endl;
   c++;
    }
   return 0;
}