// Write a C++ program to demonstrate static data member. Create a class
// Student with static data member count that keeps track of total number
// of Student objects created. Display count using a static member function.

#include <iostream>
using namespace std;
class Student
{
    private:
        static int count;
    public:
        Student()
        {
            count++;
        }
        static void display()
        {
            cout<<"Total Students: "<<count<<endl;
        }
};
int Student::count=0;
int main()
{
    Student s1;
    Student s2;
    Student s3;
    return 0;
}
