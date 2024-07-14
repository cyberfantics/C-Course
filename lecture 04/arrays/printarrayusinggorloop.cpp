#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int marks[] = {34,44,56,67};
    //Now we are going to print array using for loop
    for (int i = 0; i <= 3; i++)
    {
        cout<<"The marks of "<<i<<" is :- "<<marks[i]<<endl;
    }
    

    return 0;
}