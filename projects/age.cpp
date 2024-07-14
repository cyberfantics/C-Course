#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int a,b,c,d,e,f,g;

    string name;
    cout<<"\n\n\n\t\t\t\t\tThis is the calculator to check your age...";
    cout<<"\n\n\t\t\t\t\t\tLet's Start\n";
    cout<<"Enter Your Name ";
    cin>>name;
    cout<<"\n\n\t\t\t\t\t\tHELLO, "<<name<<" Welcome to our program.";
    cout<<"\nEnter the year of your birth "<<"\t\t\t\t\t\t\t"<<setw(4);
    cin>>a;
    cout<<"\nEnter the year inwhich you want to check your age "<<"\t\t\t\t"<<setw(4);
    cin>>b;
    c = b-a;
    cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years old.";

    cout<<"\n\nEnter the month in which you are born."<<"\t\t\t\t\t\t";
    cin>>d;
    //The total month in one years are 12
    e = 12-d;
    cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months old."<<endl;

    if (e=1)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=31-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }
    
    else if (e=2)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=28-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }    
       
    else if (e=3)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=31-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }

    else if (e=4)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=30-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }

    else if (e=5)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=31-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }

    else if (e=6)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=30-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    } 

    else if (e=7)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=31-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }   

    else if (e=8)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=31-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }

    else if (e=9)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=30-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }

    else if (e=10)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=31-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }

    else if (e=11)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=30-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }

    else if (e=12)
    {
       cout<<"\n\nEnter the day of your birth. "<<"\t\t\t\t\t\t";
        cin>>g;
        f=31-g;
        cout<<"\n\n\t\t\t\t\t\tHello, "<<name<<" You are "<<c<<" years and "<<e<<" months and "<<f<<" days old."<<endl;  
    }
    return 0;
}