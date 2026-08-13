// Create a base class Student with rollNo and name. 
// Derive a class Marks from Student.
// Store marks of 3 subjects and display complete student details with total marks.

#include <iostream>
using namespace std;
class Student
{
    public:
        int rollNo;
        string name;

        void input()
        {
            cout<<"Enter Roll No: ";
            cin>>rollNo;
            cout<<"Enter Name: ";
            cin>>name;
        }
};
class Marks : public Student
{
    public:
        int m1,m2,m3,total;
        void marks()
        {
            cout<<"Enter Marks Of Subject 1: ";
            cin>>m1;
            cout<<"Enter Marks Of Subject 1: ";
            cin>>m2;
            cout<<"Enter Marks Of Subject 1: ";
            cin>>m3;
        }
        void display()
        {
            total = m1 + m2 + m3;

            cout<<"\n---Student Details---"<<endl;
            cout<<"Student RollNo: "<<rollNo<<endl;
            cout<<"Student Name: "<<name<<endl;
            cout<<"Subject 1: "<<m1<<endl;
            cout<<"Subject 2: "<<m2<<endl;
            cout<<"Subject 3: "<<m3<<endl;
            cout<<"Total Marks: "<<total<<endl;
        }
};
int main()
{
    Marks m;
    m.input();
    m.marks();
    m.display();
    return 0;
}
