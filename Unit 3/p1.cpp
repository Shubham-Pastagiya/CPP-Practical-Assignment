// Write a C++ program to demonstrate the use of formatted output 
// by creating a class Student containing the data members 
// roll number, name, and percentage. 
// Display the output using formatting manipulators
// such as setw(), setprecision(), and fixed.

#include<iostream>
#include<iomanip>
using namespace std;
class Student
{
    public:
        int rollno;
        string name;
        float percentange;

        void in()
        {
            cout<<"Enter Roll Number: ";
            cin>>rollno;
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Percentage: ";
            cin>>percentange;
        }

        void dis()
        {
            cout<<setw(10)<<rollno;
            cout<<setw(15)<<name;
            cout<<setw(12)<<fixed<<setprecision(2)<<percentange;
        }
};
int main()
{
    Student s;
    s.in();

    cout<<"\nRollNo";
    cout<<setw(15)<<"Name";
    cout<<setw(12)<<"Percentage\n";

    s.dis();
    return 0;
}