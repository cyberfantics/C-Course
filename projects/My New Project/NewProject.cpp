#include <iostream>
#include <iomanip>
using namespace std;


//here we define variables
string name,ask,even;
char o;
int num1 , num2, age;


//Used For Default Program
void progr(void);

//For calculating
void calc(void);

//Used For Checking numberz whether they or even or odd
void chck(void);

//Used For Printing Table
void table();

//Used For Chacking Eligiblity Of Nadra
void cage(void);

//Greating Message
void greating(void);

int main(){
     progr();
    cout<<endl<<"What's your name?? ";
    cin>>::name;
//Here we ask name from user   
    cout<<"Hello "<<name<<" we perform different operations in this program..\n\t\t\t\t\t1)Basic Calculator \n\t\t\t\t\t2)Check numbers whether they or even or not\n\t\t\t\t\t3)Print a Table of Your Choice \n\t\t\t\t\t4)Check You are eligible to apply for id card or not";
    cout<<"\n\t\t\t\t\tSo Let's Start.";

//We Ask User Whether He Want To Continue For Calc Or Not
    cout<<"Hey, "<<name<<" Do You Want To Open Basic Calculator..";
    cin>>::ask;
    if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
    {
        calc();
    }

    else if (((ask=="no")||(ask=="n")||(ask=="No")))
    {
        
        cout<<"\n\nOk, move to over next program \n\n";    

//In Case Of Not We Ask User Whether He Want To Continue For Check Numbrz Or Not
        cout<<"\t\t\t\tHey, "<<name<<" Do You Want To Check Even Or Odd ";
        cin>>::ask;
        if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
        chck();

        else if (((ask=="no")||(ask=="n")||(ask=="No")))
        {
            
        //In Case Of Not We Ask User Whether He Want To Continue For Table Or Not
        cout<<"\n\nOk, move to over next program \n\n"; 
            cout<<"\t\t\t\tHey, "<<name<<" Do You Want To Print A Table Of Your Choice ";
            cin>>::ask;
            if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
            table();

            else if (((ask=="no")||(ask=="n")||(ask=="No")))
            {
                cout<<"\n\n\t\t\t\tHey, "<<name<<" Do You Want To Check Your Age For Applying ID Card ";
            cin>>::ask;
            if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
                cage();
               else if (((ask=="no")||(ask=="n")||(ask=="No"))) 
               {
                   cout<<"\t\t\t\tNo more commands found";
               }
            }
 
    }

        else{
        cout<<"\n\nI cannot understand your command,plz answer yes or no ";
    }
    }
    greating();    

    return 0;
}

void calc(){
    cout<<endl<<"\t Hello "<<::name<<" Welcome here we do some basic mathematics operations..\n\t\t\t\t\tDo you want to continue?? ";
    cin>>::ask;
    //here we use if function for user output,whether he want to continue or not
    if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
    {
        cout<<"\n\t\t\t\t\t Thanks "<<name<<" for continue in program."<<endl<<endl;
        cout<<"Chose mathematics operator in one of these.+,-,*,/ \n";
        cin>>::o;
        cout<<"\nEnter the value of num1 ";
        cin>>::num1;
        cout<<"\nEnter the value of num2 ";
        cin>>::num2;
        switch (o)
        {
        case '*':
            cout<<"\t\t\t\t\t The value of "<<num1<< o <<num2 <<" is "<<num1*num2;
            break;
        
        case '+':
            cout<<"\t\t\t\t\t The value of "<<num1<< o <<num2 <<" is "<<num1+num2;
            break;
        

        case '-':
            cout<<"\t\t\t\t\t The value of "<<num1<< o <<num2 <<" is "<<num1-num2;
            break;
        

        case '/':
            cout<<"\t\t\t\t\t The value of "<<num1<< o <<num2 <<" is "<<num1/num2;
            break;
            
        default:
            cout<<"\t\t\t\t\t This operation cannot be perfom through our program..";
            break;

        }  
            cout<<"\n\n\t\t\t\t\tThanks "<<name<<" For using my program..";
            chck();
            cout<<"\n\n\t\t\t\t\tThanks again For using my program..";
            table();
            cout<<"Hello "<<name<<"\n\n\t\t\t\t\tThanks again For using my program..";
            cage();
           
                 
    }
    //Used if user give answer in no

    else if(((ask=="no")||(ask=="n")||(ask=="No")))
    {
        cout<<"\n\n\t\t\t\t\tThanks,no problem...";
        cout<<"\n\t\t\t\t\t\tI Think You May Like To Check Even or Odd Numbrz.. " ;
        cin>>::ask;
         if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
         {
             chck();
         }
        else if(((ask=="no")||(ask=="n")||(ask=="No")))
        {
            cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Print a table?? "; 
            cin>>::ask;

            if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
            {
                table();
            }

            else if(((ask=="no")||(ask=="n")||(ask=="No")))
            {
                    cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Check Your Eligiblity For Applying Idcard "; 
                cin>>::ask;

                if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
                {
                cage();
                }
                else if(((ask=="no")||(ask=="n")||(ask=="No")))
                {
                    cout<<"\n\t\t\t\t\tOk ,as you wish.."<<endl;     greating();     
                }
            }
        }
                
    }

    else{
        cout<<"\n\t\t\t\t\t Sorry,Please continue the program and answer 'yes' or 'no'";
    }
}


void chck(){
    cout<<"\n\n\t\t\t\t\t\tHello, "<<::name<<" Do you want to check numbers whether they or even or odd?? ";
    cin>>::ask;
    if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
    {
        cout<<"\n\nTell me the number which you want to check... ";
        cin>>::num1;

        if (num1%2==0)
        {
            cout<<"\n\t\t\t\t\tHello "<<::name<<" Your given number is even ";
        }

        else if(num1%2!=0)
        {
            cout<<"\n\t\t\t\t\tHello "<<::name<<" Your given number is odd ";

        }

            cout<<"\n\n\t\t\t\t\tThanks "<<name<<" For using my program..";
            calc();
            cout<<"\n\n\t\t\t\t\tThanks again For using my program..";
            table();
            cout<<"Hello "<<name<<"\n\n\t\t\t\t\tThanks again For using my program..";
            cage();
    }
    
    else if(((ask=="no")||(ask=="n")||(ask=="No")))
    {
        cout<<"\n\n\t\t\t\t\tThanks,no problem...";
        cout<<"\n\t\t\t\t\t\tI Think You May Like To Check Our Basic Calc.. " ;
        cin>>::ask;
         if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
         {
             calc();
         }
        else if(((ask=="no")||(ask=="n")||(ask=="No")))
        {
            cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Print a table?? "; 
            cin>>::ask;

            if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
            {
                table();
            }

            else if(((ask=="no")||(ask=="n")||(ask=="No"))){
                    cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Check Your Eligiblity For Applying Idcard "; 
                cin>>::ask;

                if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
                {
                cage();
                }
                else if(((ask=="no")||(ask=="n")||(ask=="No")))
                {
                    cout<<"\n\t\t\t\t\tOk ,as you wish.."<<endl;     greating();     
                }
                }

            
        }
    }

    else{
        cout<<"\n\t\t\t\t\t Sorry,Please continue the program and answer 'yes' or 'no'";
    }

}


void table()
{
    cout<<"\n\n\t\t\t\t\t\tHello, "<<::name<<" Do you want to print a table of your choice?? ";
    cin>>::ask;
    if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
    {
        cout<<"\n\n\t\t\t\t\tThanks "<<name<<"For Opening Program,Now let's start...."<<endl;
        cout<<"Enter the value of positive integer ";
        cin>>::num1;
        cout<<"\nEnter the range of integer ";
        cin>>::num2;

        for (int i = 1; i <= num2; i++)
        {
            cout<<"\n\t\t\t\t\t"<< num1 <<" * " <<i <<" = "<<num1*i<<endl;
        }

            cout<<"\n\n\t\t\t\t\tThanks "<<name<<" For using my program..";
            chck();
            cout<<"\n\n\t\t\t\t\tThanks again For using my program..";
            calc();
            cout<<"Hello "<<name<<"\n\n\t\t\t\t\tThanks again For using my program..";
            cage();
        
    }

    else if(((ask=="no")||(ask=="n")||(ask=="No")))
    {
        cout<<"\n\n\t\t\t\t\tThanks,no problem...";
        cout<<"\n\t\t\t\t\t\tI Think You May Like To Check Even or Odd Numbrz.. " ;
        cin>>::ask;
         if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
         {
             chck();
         }
        else if(((ask=="no")||(ask=="n")||(ask=="No")))
        {
            cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Check Our Basic Calc?? "; 
            cin>>::ask;

            if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
            {
                calc();
            }

            else if(((ask=="no")||(ask=="n")||(ask=="No")))
            {
                    cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Check Our Basic Calculator  "; 
                cin>>::ask;

                if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
                {
                calc();
                }
                else if(((ask=="no")||(ask=="n")||(ask=="No")))
                {
                    cout<<"\n\t\t\t\t\tOk ,as you wish.."<<endl;     greating();     
                }
            }
        }
    }
    
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
        else if((age=18)&&(age<=20))
        {
                cout<<"\n\t\t\t\tYou are eligible to apply for identity card "<<endl;
        }

        else
        {
                cout<<"\t\t\t\tWhy you are not applyiny for your Idcard "<<endl;
        }
            cout<<"\n\n\t\t\t\t\tThanks "<<name<<" For using my program..";
            chck();
            cout<<"\n\n\t\t\t\t\tThanks again For using my program..";
            table();
            cout<<"Hello "<<name<<"\n\n\t\t\t\t\tThanks again For using my program..";
            calc();
    }

    else if(((ask=="no")||(ask=="n")||(ask=="No")))
    {
        cout<<"\n\n\t\t\t\t\tThanks,no problem...";
        cout<<"\n\t\t\t\t\t\tI Think You May Like To Check Even or Odd Numbrz.. " ;
        cin>>::ask;
         if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
         {
             chck();
         }
        else if(((ask=="no")||(ask=="n")||(ask=="No")))
        {
            cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Print a table?? "; 
            cin>>::ask;

            if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
            {
                table();
            }

            else if(((ask=="no")||(ask=="n")||(ask=="No")))
            {
                cout<<"\n\t\t\t\t\tOk, No Problem....Do You Want To Check Our Basic Calculator "; 
                cin>>::ask;

                if (((ask=="yes")||(ask=="y")||(ask=="Yes")))
                {
                calc();
                }
                else if(((ask=="no")||(ask=="n")||(ask=="No")))
                {
                    cout<<"\n\t\t\t\t\tOk ,as you wish.."<<endl;     greating();     
                }
            } 
        
        }
                
    }

    else{
        cout<<"\n\t\t\t\t\t Sorry,Please continue the program and answer 'yes' or 'no'";
    }
}



void progr(){
   cout<<"\n\t\t\t\t\t\tThis Project is created by Syed Mansoor Ul Hassan Bukhari";
}

void  greating(){
    cout<<"\n\n\t\t\t\t\tHey "<<::name<<" Thanks For Using Our Program\n\t\tFor any kind of suggestion or improvement in program please contact\n\t\t\t\t +92-3558608518..";
}   