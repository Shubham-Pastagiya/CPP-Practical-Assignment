// Write a C++ program to demonstrate error handling in file operations 
// by creating a class Account containing account number and balance.
// Display an appropriate error message if the file cannot be opened for reading or writing.

#include<iostream>
#include<fstream>
using namespace std;
class Account
{
    int accno;
    float balance;

    public:
        void get()
        {
            cout<<"Enter Accout No: ";
            cin>>accno;
            cout<<"Enter Balance: ";
            cin>>balance;
        }
        void put()
        {
            cout<<"Account No: "<<accno<<endl;
            cout<<"Balance: "<<balance<<endl;
        }
};
int main()
{
    Account a;
    fstream file;

    file.open("account.dat", ios::out | ios::binary);

    if(file.fail())
    {
        cout<<"Error: File could not be opened for writing!";
        return 1;
    }

    a.get();
    file.write((char*)&a, sizeof(a));
    file.close();

    file.open("account.dat", ios::in | ios::binary);

    if(file.fail())
    {
        cout<<"Error: File could not be opened for reading!";
        return 1;
    }

    file.read((char*)&a, sizeof(a));

    if(file.fail())
    {
        cout<<"Error: Unable to read account data!";
        file.close();
        return 1;
    }

    cout<<"\nAccount Details:\n";
    a.put();
    file.close();
    return 0;
}