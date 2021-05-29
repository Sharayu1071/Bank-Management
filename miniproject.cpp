
#include<iostream>
using namespace std;
class BankAccount
{
private:
    int ano;
    char name[30];
    float balance;
public:
    void getData()
    {
        cout<<"\n Enter Account no : ";
        cin>>ano;
        cout<<"\n Enter Name : ";
        cin>>name;
        cout<<"\n Enter opening balance : ";
        cin>>balance;
    }
    void deposit()
    {
        float amt;
        cout<<"\n Enter amount : ";
        cin>>amt;
        balance=balance+amt;
        cout<<"\n Amount is deposited";
    }
    void withdraw()
    {
        float amt;
        cout<<"\n Enter amount : ";
        cin>>amt;
        if(amt<=balance)
        {
        balance=balance-amt;
        cout<<"\n Amount is withdrawn";
        }
        else
            cout<<"\n Insufficient fund ";
    }
    void display()
    {
        cout<<"\n Account no:          "<<ano;
        cout<<"\n Name :               "<<name;
        cout<<"\n Balance :            "<<balance;
    }
    int getano()
    {
        return ano;
    }

};

/*Program by Sharayu Banait*/

int main()
{
    BankAccount b[10];
    int i,choice,tempa;
    for(i=0;i<10;i++)
    {
        b[i].getData();
    }
    do
    {
        cout<<"\n\n\n\n";
        cout<<"\n ####MENU#### ";
        cout<<"\n1.Deposit\n2.Withdraw\n3.Display\n4.Exit";
        cout<<"\n Enter choice ";
        cin>>choice;
        if(choice>=1 && choice<=3)
        {
            cout<<"\n Enter account no: ";
            cin>>tempa;
            for(i=0;i<10;i++)
            {
                if(b[i].getano()==tempa)
                {
                    switch(choice)
                    {
                        case 1 : b[i].deposit(); break;
                        case 2 : b[i].withdraw(); break;
                        case 3 : b[i].display(); break;

                    }
                    break;

                }
            }
            if(i==10)
                cout<<"\n Invalid account number ";
        }
        else if(choice==4)
            cout<<"\n Good Bye ";
        else
            cout<<"\n Invalid choice ";

    }while(choice!=4);

    return 0;

}
