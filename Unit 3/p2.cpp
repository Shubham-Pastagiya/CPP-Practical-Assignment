// Write a C++ program to demonstrate formatted input and output
// by creating a class Employee containing the data members 
// employee ID, name, and salary. Accept the details from the user and 
// display them in a well-formatted tabular form.

#include<iostream>
#include<iomanip>
using namespace std;
class Employee
{
    public:
        int empid;
        string name;
        float salary;

        void in()
        {
            cout<<"Enter Employee ID: ";
            cin>>empid;
            cout<<"Enter Employee Name: ";
            cin>>name;
            cout<<"Enter Employee Salary: ";
            cin>>salary;
        }

        void dis()
        {
            cout<<left;
            cout<<setw(10)<<empid;
            cout<<setw(15)<<name;
            cout<<setw(10)<<salary<<endl;
        }
};
int main()
{
    Employee e;
    e.in();

    cout<<"\n";
    cout<<left<<setw(10)<<"ID";
    cout<<setw(15)<<"Name";
    cout<<setw(10)<<"Salary"<<endl;

    e.dis();
    return 0;
}