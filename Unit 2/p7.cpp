// Demonstrate composition (container object) by creating a class Engine 
// with engine details. Create a class Car that contains an Engine object 
// and displays both car and engine information.

#include <iostream>
using namespace std;
class Engine
{
    public:
        int power;
        string type;

        void input()
        {
            cout<<"Enter Engine Type: ";
            cin>>type;
            cout<<"Enter Engine Power: ";
            cin>>power;
        }
        void display()
        {
            cout<<"Engine Type: "<<type<<endl;
            cout<<"Engine Power: "<<power<<" HP"<<endl;
        }
};
class Car
{
    public:
        string brand;
        Engine engine;

        void in()
        {
            cout<<"Enter Car Brand: ";
            cin>>brand;
            engine.input();
        }
        void dis()
        {
            cout<<"\nCar Brand: "<<brand<<endl;
            engine.display();
        }
};
int main()
{
    Car c;
    c.in();
    c.dis();
    return 0;
}
