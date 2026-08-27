// Write a C++ program to demonstrate binary subtraction (-) operator overloading
// by creating a class Distance that subtracts two distance objects and displays the result.

#include <iostream>
using namespace std;
class Distance
{
    int meter;
    public:
        Distance(int m=0)
        {
            meter = m;
        }
        Distance operator-(Distance d)
        {
            Distance temp;
            temp.meter = meter - d.meter;
            return temp;
        }
        void display()
        {
            cout<<meter<< " meters";
        }
};
int main()
{
    Distance d1(10),d2(4),d3;
    d3 = d1 - d2;
    cout<<"Difference: ";
    d3.display();
    return 0;
}
