// Create a base class Person with name and age. 
// Derive Employee from Person. 
// Store employee ID and salary, and display all employee details.

#include <iostream>
using namespace std;
class Person
{
    public:
        int age;
        string name;

        void input()
        {
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Age: ";
            cin>>age;
        }
};
class Employee : public Person
{
    public:
        int id;
        float salary;

        void get()
        {
            cout<<"Enter ID: ";
            cin>>id;
            cout<<"Enter Salary: ";
            cin>>salary;
        }
        void display()
        {
            cout<<"\n---Employee Details---"<<endl;
            cout<<"Employee ID: "<<id<<endl;
            cout<<"Employee Name: "<<name<<endl;
            cout<<"Employee Age: "<<age<<endl;
            cout<<"Employee Salary: "<<salary<<endl;
        }
};
int main()
{
    Employee e;
    e.input();
    e.get();
    e.display();
    return 0;
}
