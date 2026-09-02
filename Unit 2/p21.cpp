// Write a C++ program to demonstrate pointers to objects by
// creating a class Student containing the data members roll number and name. 
// Create an object pointer to access and display the student’s details.

#include <iostream>
using namespace std;
class Student
{
    int rollno;
    string name;
    public:
        Student(int r,string n)
        {
            rollno = r;
            name = n;
        }
        void display()
        {
            cout<<"Roll Number: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
        }
};
int main()
{
    Student *p = new Student(101, "Shubh");
    p->display();
    delete p;
    return 0;
}
