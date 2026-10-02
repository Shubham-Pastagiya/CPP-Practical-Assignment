// Write a C++ program to demonstrate writing data into a text file 
// by creating a class Student containing roll number, name, and marks.
// Store the student details in a file named student.txt.

#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    public:
        int roll;
        string name;
        float marks;
};
int main()
{
    Student s;

    cout<<"Enter Roll Number: ";
    cin>>s.roll;
    cout<<"Enter Name: ";
    cin>>s.name;
    cout<<"Enter Marks: ";
    cin>>s.marks;

    ofstream file("student.txt");

    file<<s.roll<<endl;
    file<<s.name<<endl;
    file<<s.marks<<endl;

    file.close();

    cout<<"Data Written Successfully.";
    return 0;
}