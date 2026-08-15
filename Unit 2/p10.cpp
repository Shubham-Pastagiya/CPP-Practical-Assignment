// Demonstrate an abstract class by creating an abstract base class Shape
// with a pure virtual function calculateArea(). 
// Derive Rectangle and Circle from Shape and implement calculateArea() to display areas.

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
        int length,width;

        void input()
        {
            cout<<"Enter Length Of Rectangle: ";
            cin>>length;
            cout<<"Enter Width Of Rectangle: ";
            cin>>width;
        }
        void calculateArea()
        {
            cout<<"Area Of Rectnagle: "<<length * width<<endl;
        }
};
class Circle : public Shape
{
    public:
        int radius;

        void input()
        {
            cout<<"\nEnter Radius Of Circle: ";
            cin>>radius;
        }
        void calculateArea()
        {
            cout<<"Area Of Circle: "<<3.14 * radius * radius<<endl;
        }
};
int main()
{
    Rectangle r;
    Circle c;

    r.input();
    r.calculateArea();

    c.input();
    c.calculateArea();
    return 0;
}
