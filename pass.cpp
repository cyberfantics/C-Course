#include <iostream>
using namespace std;

class employ
{
    private:
    int py;
    
    public:
    string name;
    float pyy;
    employ(int py,string name,float pyy){
        this ->py=py;
        this ->name=name;
        this ->pyy=pyy;
    }
    void otpt(){
        cout<<"Your name is "<<name<<" your id is " <<py<<" and your pay is "<<pyy;
    }
};

int main(){
    employ c(6785, "Mansoor", 78689);
    c.otpt();
    return 0;
}