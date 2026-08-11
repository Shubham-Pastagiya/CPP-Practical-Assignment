// Write a program to demonstrate constructor overloading 
// by creating a class Rectangle with 
// (i) default constructor, (ii) parameterized constructor with length and breadth.
//  Calculate and display area in each case.

#include <iostream>
using namespace std;
class Rectangle
{
    private:
        int length,breadth;
    public:
        Rectangle()
        {
            length = 4;
            breadth = 5;
        }
        Rectangle(int l,int b)
        {
            length = l;
            breadth = b;
        }
        void Area()
        {
            cout<<"Area: "<<length * breadth<<endl;
        }
};
int main()
{
    Rectangle r1;
    cout<<"Using Default Constructor:- "<<endl;
    r1.Area();

    Rectangle r2(10,20);
    cout<<"Using Paramaterized Constructor:- "<<endl;
    r2.Area();
    return 0;
}
