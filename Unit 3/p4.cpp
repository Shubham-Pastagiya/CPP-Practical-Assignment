// Write a C++ program to demonstrate reading data from a text file 
// by creating a class Student. 
// Read the contents of student.txt and display them on the screen.

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

    ifstream file("student.txt");

    file>>s.roll;
    file>>s.name;
    file>>s.marks;

    file.close();

    cout<<"Roll No: "<<s.roll<<endl;
    cout<<"Name: "<<s.name<<endl;
    cout<<"Marks: "<<s.marks<<endl;
    return 0;
}