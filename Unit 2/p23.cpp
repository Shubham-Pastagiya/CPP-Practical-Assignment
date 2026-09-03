// Write a C++ program to demonstrate pointers to derived classes
// by creating a base class Person and a derived class Student. 
// Create a pointer of the derived class to access and 
// display both the inherited and derived class members.

#include <iostream>
using namespace std;
class Person
{
    public:
        string name;
        void display()
        {
            cout<<"Name: "<<name<<endl;
        }

};
class Student : public Person
{
    public:
        int rollno;
        void show()
        {
            cout<<"Roll No: "<<rollno<<endl;
        }
};
int main()
{
    Student s;
    Student *ptr = &s;

    ptr->name = "Shubham";
    ptr->rollno = 2040;

    ptr->display();
    ptr->show();
    return 0;
}
