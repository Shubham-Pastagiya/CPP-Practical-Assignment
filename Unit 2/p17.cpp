// Write a C++ program to demonstrate overloading 
// of the equality (==) operator by creating a class Student 
// that compares the roll numbers of two student objects.

#include <iostream>
using namespace std;
class Student
{
    int rollno;
    public:
        Student(int r)
        {
            rollno = r;
        }
        bool operator==(Student s)
        {
            return rollno == s.rollno;
        }
};
int main()
{
    Student s1(101), s2(101);
    if(s1==s2)
        cout<<"Both Are Equal Roll Numbers!!";
    else
        cout<<"Both Are Not Equal Roll Numbers!!";
    return 0;
}
