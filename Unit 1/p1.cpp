// Write a C++ program to create a class BankAccount with private
// data members accountNo and balance. Provide member functions to
// deposit and withdraw amount. Display the final balance.

#include <iostream>
using namespace std;
class BankAccount
{
    private:
    long int accountNo;
    int dp;
    int wd;
    int balance;

    public:
    void input()
    {
        cout<<"Enter Account Number: ";
        cin>>accountNo;
        cout<<"Enter Account Balance: ";
        cin>>balance;
    } 
    void deposit()
    {
        cout<<"Enter Amount to Deposit: ";
        cin>>dp;
        if(dp<=0)
        {
            cout<<"Amount Shoul Be Greater Than 0 !";
        }
        else
        {
            balance += dp;
            cout<<"Amount Deposited Successfully"<<endl;
            cout<<"Current Balance: "<<balance<<endl;
        }
    }

    void withdraw()
    {
        cout<<"Enter Amount to Withdraw: ";
        cin>>wd;
        if(wd>balance)
        {
            cout<<"Insufficient Balance !"<<endl;
        }
        else
        {
            balance -= wd;
            cout<<"Amount Withdrawn Successfully"<<endl;
            cout<<"Current Balance: "<<balance<<endl;
        }
    }

    void display()
    {
        cout<<"Account Number: "<<accountNo<<endl;
        cout<<"Current Balance: "<<balance<<endl;
    }
};
void clearScreen()
{
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

int main()
{
    clearScreen();
    BankAccount b1;
    int choice;
    do
    {
        cout << " ----------------- Bank Account System ----------------- \n"
             << " | 1. Input                                            | \n"
             << " | 2. Deposit                                          | \n"
             << " | 3. Withdraw                                         | \n"
             << " | 4. Display                                          | \n"
             << " | 5. Exit                                             | \n"
             << " ------------------------------------------------------- \n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            clearScreen();
            b1.input();
            break;

        case 2:
            clearScreen();
            b1.deposit();
            break;

        case 3:
            clearScreen();
            b1.withdraw();
            break;

        case 4:
            clearScreen();
            b1.display();
            break;

        case 5:
            clearScreen();
            cout << "Byyy \n";
            return 0;

        default:
            clearScreen();
            cout << "You have Choose Wrong Operations ... \n";
            break;
        }
    } while (choice != 4);
   
    return 0;
}