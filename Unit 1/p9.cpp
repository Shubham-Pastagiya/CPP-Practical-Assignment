// Write a C++ program to create a class Rectangle with private data
// members length and breadth. Write a member function to return area.
// In main(), receive an object of class Rectangle and display its area.

#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int length,breadth;
    public:
        void input()
        {
            cout<<"Enter Length: ";
            cin>>length;
            cout<<"Enter Breadth: ";
            cin>>breadth;
        }
        Rectangle Area()
        {
            Rectangle r;
            r.length = length * breadth;
            return r;
        }
        void display()
        {
            cout<<"Area of Rectangle: "<<length<<endl;
        }
};
int main()
{
    Rectangle r1,r2;
    r1.input();
    r2 = r1.Area();
    r2.display();
    return 0;
}
