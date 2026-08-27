// Write a C++ program to demonstrate unary increment (++) operator overloading
// by creating a class Counter that increments
// the value of an object using the overloaded operator.

#include <iostream>
using namespace std;
class Counter
{
    int a;
    public:
        Counter()
        {
            a = 5;
        }  
        void operator++()
        {
            a++;
        }
        void display()
        {
            cout<< a << endl;
        }
};
int main()
{
    Counter c1;
    cout<<"Before: ";
    c1.display();

    ++c1;

    cout<<"After: ";
    c1.display();
    return 0;
}
