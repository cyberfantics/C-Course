#include <iostream>
using namespace std;

//global variable
int gloe = 54;

int main(){
    //local variable
    int gloe = 6;
    gloe = 56;
    cout<<gloe;
    return 0;
    /* Here local variable is dominant over global variable.
    first we take a global variable 54. then we take a local variable
    6 and we update variable to 56. here it take local varable 6 and update
    it to 56.So local variable is dominant over global variable.*/
}