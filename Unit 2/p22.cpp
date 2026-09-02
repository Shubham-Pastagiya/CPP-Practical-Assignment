// Write a C++ program to demonstrate the use of the this pointer 
// by creating a class Employee containing the data members 
// employee ID, name, and salary. Use this pointer to initialize and display the object data.

#include <iostream>
using namespace std;
class Employee
{
    int Id;
    string name;
    float salary;
    public:
        Employee(int Id,string name,float salary)
        {
            this->Id = Id;
            this->name = name;
            this->salary = salary;
        }
        void display()
        {
            cout<<"Employee ID: "<<this->Id<<endl;
            cout<<"Employee Name: "<<this->name<<endl;
            cout<<"Employee Salary: "<<this->salary<<endl;
        }
};  
int main()
{
    Employee e(101, "Shubh", 50000);
    e.display();
    return 0;
}
