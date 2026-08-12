// Write a program to demonstrate the use of destructors. 
// Create a class Demo with a destructor that displays a message when the object is destroyed.

#include <iostream>
using namespace std;
class Demo
{
    public:
    ~Demo()
    {
        cout<<"Destructor is called. Object is Destroyed"<<endl;
    }
};
int main()
{
    Demo d;
    cout<<"Object is created."<<endl;
    return 0;
}
