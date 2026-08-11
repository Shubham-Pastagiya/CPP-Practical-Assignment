// Write a program to create a class Student 
// with data members rollNo, name and marks.
//  Use a parameterized constructor to initialize the values and display the details.

#include <iostream>
using namespace std;
class Student
{
    private:
        int rollNo;
        string name;
        float marks;
    public:
        Student(int rollNo,string name,float marks)
        {
            this->rollNo = rollNo;
            this->name = name;
            this->marks = marks;
        }
        void display()
        {
            cout<<"RollNo: "<<rollNo<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main()
{
    Student s(2041,"Shubham",90);
    s.display();
    return 0;
}
