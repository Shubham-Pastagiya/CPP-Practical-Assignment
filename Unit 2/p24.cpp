// Write a C++ program to demonstrate virtual functions by 
// creating a base class Shape containing a virtual function display().
// Create a class Rectangle from Shape and override the display() function.

#include <iostream>
using namespace std;
class Shape
{
    public:
        virtual void display()
        {
            cout<<"This is a Shape"<<endl;
        }
};
class Rectangle : public Shape
{
    public:
        void display()
        {
            cout<<"This is a Rectangle"<<endl;
        }
};
int main()
{
    Shape *ptr;
    Rectangle r;
    
    ptr = &r;
    ptr->display();
    return 0;
}
