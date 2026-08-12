// Write a program to create a class BankAccount 
// with balance as data member. Use constructors to initialize balance
//  and a destructor to display the final balance before object destruction.

#include <iostream>
using namespace std;
class BankAccount
{
    private:
        int balance;
    public:
        BankAccount(int b)
        {
            balance = b;
            cout<<"Account Created."<<endl;
        }
        ~BankAccount()
        {
            cout<<"Final Balance: "<<balance<<endl;
            cout<<"Account Destroyed."<<endl;
        }
};
int main()
{
    BankAccount b(18000);
    return 0;
}
