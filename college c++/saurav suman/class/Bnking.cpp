#include <iostream>
#include <string.h>
using namespace std;

class BankAccount
{
private:
    string AccountHolderName;
    string AccountNumber;
    double Balance;
    int id;
    int Mpin;
    double money;

public:

    void New_user(){
        cout<<"Enter account holder name:"<<endl;
        cin>>AccountHolderName;
        cout<<"Enter account number"<<endl;
        cin>>AccountNumber;
        cout<<"Enter your balance:"<<endl;
        cin>>Balance;
        cout<<"Enter your Mpin"<<endl;
        cin>>id;
    }

    void show_User()
    {
        cout << "AccountHolderName : " << AccountHolderName << endl;
        cout << "AccountNumber : " << AccountNumber << endl;
        cout << "Balance : " << Balance << endl;
    }

    // DisplayBalance function
    void displayBalance()
    {
        cout<<"Enter your Mpin"<<endl;
        cin>>Mpin;
        if(id==Mpin)
        cout << "Current Balance : " << Balance << endl;
        else
        cout<<"Invalid Mpin"<<endl;
    }

    // DepositMoney function
    void depositMoney()
    {   
        cout<<"Enter your Mpin"<<endl;
        cin>>Mpin;
        if(id==Mpin)
        {
            cout<<"enter money for deposite:"<<endl;
            cin>>money;
            if (money > 0)
            {
                Balance += money;
                cout << "Deposit of $" << money << " successful." << endl;
            }
            else
            {
                cout << "Invalid deposit amount. Please enter a positive value." << endl;
            }
        }
        else
        cout<<"Invalid Mpin"<<endl;
    }
    // Withdraw function
    void withdraw()
    {
        cout<<"Enter your Mpin"<<endl;
        cin>>Mpin;
        if(id==Mpin)
        {
            cout<<"enter money for withdraw:"<<endl;
            cin>>money;
            if (money > 0 && money <= Balance)
            {
                Balance -= money;
                cout << "Withdrawal of $" << money << " successful." << endl;
            }
            else if (money <= 0)
            {
                cout << "Invalid withdrawal amount. Please enter a positive value." << endl;
            }
            else
            {
                cout << "Insufficient funds for withdrawal of $" << Balance << "." << endl;
            }
        }
        else
        cout<<"Invalid Mpin:"<<endl;    
    }
};

int main()
{
    int ch;
    int size;
    cout<<"Welcome"<<endl;
    cout<<"No of account to create:";
    cin>>size;
    cout<<endl;

    BankAccount user[size];
    for(int i=1;i<=size;i++){
        cout<<"Hello user"<<i<<endl;

        do
        {
            cout<<"1.New_user:\t 2.show_user:\t 3.Deposite Money:\t 4.Withdraw Money:\t 5.Display Balance:\t 6.NEW user "<<endl;
            cin>>ch;
            switch(ch)
            {
                case 1: user[i].New_user();break;
                case 2: user[i].show_User();break;
                case 3: user[i].depositMoney();break;
                case 4: user[i].withdraw();break;
                case 5: user[i].displayBalance();break;
                default: cout<<""<<endl;
            }if(ch==6)break;
        }while(true);
    
    }
    return 0;
}