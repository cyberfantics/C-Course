#include <iostream>
using namespace std;

//global variable
int gloe = 54;

void sum(){
    cout<<gloe;
    /* Here it take the value of gloe from global variable because we dont 
    give any value of gloe in local variable.then it return to sum() in
    main function and print the value of gloe...but if we take the value 
    of gloe as
    int main(){
    //local variable
    int gloe = 6;
    gloe = 56;  
    cout<<gloe;
    sum();
    return 0;
}
 then output is 5654....which mean main funtion is dominent over all other
 functions...
    */
}

int main(){
    //local variable
    int gloe = 6;
    gloe = 56;  
    sum();
      cout<<gloe;
    return 0;
}