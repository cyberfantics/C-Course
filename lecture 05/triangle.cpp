#include <iostream>

using namespace std;

int main(){
    int a, b;
    cout<<"Give length of right side "<<endl;
    cin>>a;
    cout<<"\nGive length of left side "<<endl;
    cin>>b;
    for (int i = 0; i <= b; i++)
    {
        for (int j = a; j <= i; j++)
        {
            // char f='#';
            // cout<<char(j);
            // char t = f;
            // f = j;
            // j = t;
            cout<<j;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}