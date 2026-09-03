// Write a C++ program to demonstrate runtime polymorphism by
// creating a base class Animal with a virtual function sound(). 
// Derive classes Dog and Cat from Animal and 
// display their respective sounds using a base class pointer.
#include <iostream>
using namespace std;
class Animal
{
    public:
        virtual void sound()
        {
            cout<<"Animal Makes a Sound"<<endl;
        }
};
class Dog : public Animal
{
    public:
        void sound() override
        {
            cout<<"Dog Sounds: Bhauu! Bhauu!"<<endl;
        }
};
class Cat : public Animal
{
    public:
        void sound() override
        {
            cout<<"Cat Sounds: Meoww! Meoww!"<<endl;
        }
};
int main()
{
    Animal *ptr;
    
    Dog d;
    Cat c;

    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();
    return 0;
}
