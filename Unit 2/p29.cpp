// Write a C++ program to demonstrate pointers to derived classes
// by creating a base class Account and a derived class SavingAccount. 
// Access the inherited data members and member functions using a pointer.

#include <iostream>
using namespace std;
class Account
{
    public:
        string name;
        int accounntno;

        void display()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Account No: "<<accounntno<<endl;
        }
};
class SavingAccount : public Account
{
    public:
        float balance;

        void show()
        {
            cout<<"Balance: "<<balance<<endl;
        }
};
int main()
{
    SavingAccount s;

    SavingAccount *ptr = &s;
    ptr->name = "Shubh";
    ptr->accounntno = 2040;

    ptr->balance = 5000;
    ptr->display();
    ptr->show();
    return 0;
}
