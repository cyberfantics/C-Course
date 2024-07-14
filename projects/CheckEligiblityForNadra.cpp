#include <iostream>
#include <iomanip>
using namespace std;

void cage(void);
string ask;
int age;
int main(){
    cage();
    return 0;
}


void cage(void)
{
    cout<<"\n\n\t\t\t\t\t Do You Want To Check You Eligiblity To Apply For Identity Card ? "<<endl<<endl ;
    cin>>::ask;
    if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
    {
        cout<<"Enter Your Age "<<endl<<endl;
        cin>>::age;

        if((age<18)&&(age>1))
        {
                cout <<"\n\t\t\t\tYou are not eligible to apply for your idcard "<<endl;
        }
        else if(age<1)
        {
                cout<<"\n\t\t\t\tYou are not even born "<<endl;
        }
        else if((age<=18)&&(age<=20))
        {
                cout<<"\n\t\t\t\tYou are eligible to apply for identity card "<<endl;
        }

        else
        {
                cout<<"\t\t\t\tWhy you are not applyiny for your Idcard "<<endl;
        }
    }

    // else if(((ask=="no")||(ask=="n")||(ask=="No")))
    // {
    //     cout<<"\n\n\t\t\t\t\tThanks,no problem...";
    //     cout<<"\n\t\t\t\t\t\tI Think You May Like To Check Even or Odd Numbrz.. " ;
    //     cin>>::ask;
    //      if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
    //      {
    //          chck();
    //      }
    //     else if(((ask=="no")||(ask=="n")||(ask=="No")))
    //     {
    //         cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Print a table?? "; 
    //         cin>>::ask;

    //         if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
    //         {
    //             table();
    //         }

    //         else if(((ask=="no")||(ask=="n")||(ask=="No")))
    //         {
    //             cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Check Our Basic Calculator "; 
    //             cin>>::ask;

    //             if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
    //             {
    //             calc();
    //             }
    //             else if(((ask=="no")||(ask=="n")||(ask=="No")))
    //             {
    //                 cout<<"\n\t\t\t\t\tOk ,as you wish.."<<endl;  
    //             }
    //         } 
        
    //     }
                
    // }

    // else{
    //     cout<<"\n\t\t\t\t\t Sorry,Please continue the program and answer 'yes' or 'no'";
    // }


}