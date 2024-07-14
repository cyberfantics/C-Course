#include <iostream>
using namespace std;

int main(){
    int n,a=1,limit;
    cout<<"Print the table of ";
    cin>>n;
    cout<<"Print the limit ";
    cin>>limit;
    while(a<=limit)
    {
        cout<<n<<" * "<<a<<" = "<<n*a<<endl;
        a++;
    }
    return 0;
    
}