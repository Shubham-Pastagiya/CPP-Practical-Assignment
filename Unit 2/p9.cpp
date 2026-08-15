// Demonstrate implementation of inheritance in the C++ object model 
// using base class Shape with a function to accept dimensions.
// Derive a class Square from Shape to calculate and display the area of the square.

#include <iostream>
using namespace std;
class Shape
{
    public:
        int l;

        void input()
        {
            cout<<"Enter Side Of Sqaure: ";
            cin>>l;
        }
};
class Square : public Shape
{
    public:
        void area()
        {
            cout<<"Area Of Square: "<<l * l<<endl;
        }
};
int main()
{
    Square s;
    s.input();
    s.area();
    return 0;
}
