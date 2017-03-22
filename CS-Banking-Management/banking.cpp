#include <iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class bank{
int accno;
char name[50];
double mobno;
float balance=0,amount,sho;

public:
    void open_acc();
    void deposite();
    void withdraw();
    void chkbal();
    int all_acc_details();
    int dis();
    int menu();
};

void bank::open_acc()
{

    cout<<"Enter the Account No"<<endl;
    cin>>accno;
    cout<<"Enter account Holder Name";
    cin.ignore();
    cout<<"\nName:";
    cin.getline(name,50);
    cout<<"Enter Account Holder Mobile No"<<endl;
    cout<<"Mobile No:";
    cin>>mobno;
    cout<<"Account Successfully created....."<<endl;

}

int bank::dis()
{

      cout<<"ACC NO="<<accno<<endl;
      cout<<"ACC holder Name="<<name<<endl;
      cout<<"ACC holder Mob No="<<mobno<<endl;
      return 1;
}

void bank::deposite()
{
    cout<<"enter the Account No"<<endl;
    int x;
    cin>>x;
    if(x==accno)
    {
        cout<<"Enter the amount you wanna Deposite"<<endl;
        cin>>amount;
        balance=balance+amount;
        cout<<"\n\n Message: You have successfully Deposire Rs."<<amount<<"in to your account.\n\nYour current balance is: "<<balance<<"\n\n";

    }
    else
        {
        cout<<"You have Entered Invalid Account Number";
    }
}

void bank::withdraw(){
cout<<"Enter the account Number you wanna withdraw Money"<<endl;
int y;
cin>>y;

if(y==accno)
{
    cout<<"Enter the amount you wanna withdraw"<<endl;
    cin>>amount;
    if(amount>balance)
    {
        sho=amount-balance;
        cout<<"\n\nYou can't withdraw Rs."<<amount<<"as your account balance is"<<balance<<"\n\n You are short of Rs."<<sho;

    }
    else{
        balance=balance-amount;
        cout<<"You have withdraw Rs."<<amount<<"SUCCESSFULLY\n\n Your acoount balance is:"<<balance<<"\n\n";
    }
}
else{
    cout<<"You have entered invalid account No";
}
}

void bank::chkbal(){
cout<<"Enter account no"<<endl;
int z;
cin>>z;

if(z==accno)
{
    cout<<"Your account balance is Rs."<<balance<<endl;
}
else{
    cout<<"Account Doesn't Exist!!";
}
}

int bank::all_acc_details()
{
    int g;
    g=dis();
    return g;

}
int main()
{
   bank ob;
   int ch;
   do{
    cout<<"\n1.Open Account\n2.Deposite\n3.Withdraw\n4.Balance Enquiry\n5.Display ALL Accounts Detail\n6.Exit\n\n";
    ch=ob.menu();
    switch(ch)
    {
         case 1:ob.open_acc();
        break;
        case 2:ob.deposite();
        break;
        case 3:ob.withdraw();
        break;
        case 4:ob.chkbal();
        break;
        case 5:ob.all_acc_details();
        break;

        case 6: exit(1);

        default:cout<<"Invalid choice!!";
    }
   }while(1);
    return 0;
}

int bank::menu()
{
    int ch;
    cout<<"Enter your choice"<<endl;
    cin>>ch;
    return ch;

}
