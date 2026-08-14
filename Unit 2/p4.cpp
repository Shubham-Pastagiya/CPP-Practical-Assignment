// Create a base class Rectangle with length and width.
//  Derive a class Area from Rectangle to calculate and display the area of the rectangle.

#include <iostream>
using namespace std;
class Rectangle
{
    public:
        int length,width;
};
class Area : public Rectangle
{
    public:
        void input()
        {
            cout<<"Enter Length: ";
            cin>>length;
            cout<<"Enter Width: ";
            cin>>width;
        }
        void display()
        {
            cout<<"Area of Rectangle: "<<length * width<<endl;
        }
};
int main()
{
    Area a;
    a.input();
    a.display();
    return 0;
}
