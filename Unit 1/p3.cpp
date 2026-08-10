// Write a C++ program to create a class Employee with private data
// members id, name and salary. Provide a member function to display
// the details of the employee

#include<iostream>
using namespace std;
class Employee
{
    private:
        int id;
        float salary;
        string name;
    public:
    void input()
    {
        cout<<"Enter Employee Id: ";
        cin>>id;
        cout<<"Enter Employee Name: ";
        cin>>name;
        cout<<"Enter Employee Salary: ";
        cin>>salary;
    }
    void display()
    {
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary<<endl;
    }
};
int main()
{
    Employee e1;
    e1.input();
    e1.display();
    return 0;
}