// Write a C++ program to demonstrate binary file operations by 
// creating a class Employee containing employee ID, name, and salary. 
// Store the employee records in a binary file and display them.

#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
    int id;
    char name[30];
    float salary;

    public:
        void get()
        {
            cout<<"Enter Employee ID: ";
            cin>>id;
            cout<<"Enter Employee Name: ";
            cin>>name;
            cout<<"Enter Employee Salary: ";
            cin>>salary;
        }

        void display()
        {
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
        }
};
int main()
{
    Employee e;
    fstream file;
    int n;

    file.open("employee.dat", ios::out | ios::binary);

    cout<<"Enter Number of Employees: ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        e.get();
        file.write((char*)&e, sizeof(e));
    }

    file.close();

    file.open("employee.dat", ios::in | ios::binary);
    
    cout<<"\nEmployee Records:\n";

    while(file.read((char*)&e, sizeof(e)))
    {
        e.display();
    }

    file.close();
    return 0;
}