// Write a C++ program to demonstrate virtual functions by 
// creating an abstract base class Shape containing a pure virtual function calculateArea(). 
// Declare the classes Rectangle and Circle from Shape, implement the calculateArea() function, and 
// display their respective areas using a base class pointer.

#include <iostream>
using namespace std;
class Shape
{
    public:
        virtual void calculateArea() = 0;
};
class Rectangle : public Shape
{
    public:
        void calculateArea() override
        {
            int length = 10, width = 5;
            cout<<"Area of Rectangle: "<<length * width<<endl;
        }
};
class Circle : public Shape
{
    public:
        void calculateArea() override
        {
            float radius = 8;
            cout<<"Area of Circle: "<<3.14 * radius * radius<<endl;
        }
};
int main()
{
    Shape *ptr;

    Rectangle r;
    Circle c;

    ptr = &r;
    ptr->calculateArea();

    ptr = &c;
    ptr->calculateArea();
    return 0;
}
