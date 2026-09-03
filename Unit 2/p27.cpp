// Write a C++ program to demonstrate virtual functions by
// creating a base class Vehicle containing a virtual function showDetails().
// Derive classes Car and Bike from Vehicle and display their details using a base class pointer.

#include <iostream>
using namespace std;
class Vehicle
{
    public:
        virtual void display()
        {
            cout<<"This is a Vehicle"<<endl;
        }
};
class Car : public Vehicle
{
    public:
        void display() override
        {
            cout<<"Vehicle: Car"<<endl;
            cout<<"Wheels: 4"<<endl;
        }
};
class Bike : public Vehicle
{
    public:
        void display() override
        {
            cout<<"Vehicle: Bike"<<endl;
            cout<<"Wheels: 2"<<endl;
        }
};
int main()
{
    Vehicle *ptr;

    Car c;
    Bike b;

    ptr = &c;
    ptr->display();

    ptr = &b;
    ptr->display();
    return 0;
}
