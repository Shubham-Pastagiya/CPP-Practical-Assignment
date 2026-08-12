// Write a program to create a class Student with a copy constructor.
// Copy data from one object to another using the copy constructor and display the copied data

#include <iostream>
using namespace std;
class Student
{
    private:
        int rollNo;
        string name;
    public:
        Student(int r,string n)
        {
            rollNo = r;
            name = n;
        }
        Student(Student &s)
        {
            rollNo = s.rollNo;
            name = s.name;
        }
        void display()
        {
            cout<<"Roll No: "<<rollNo<<endl;
            cout<<"Name: "<<name<<endl;
        }
};
int main()
{
    Student s1(101,"Shubh");
    Student s2(s1);
    cout<<"Copied Data: "<<endl;
    s2.display();
    return 0;
}
