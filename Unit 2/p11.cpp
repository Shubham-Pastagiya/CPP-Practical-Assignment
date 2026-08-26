// Write a C++ program to demonstrate function overloading 
// by creating a class Calculator with overloaded functions add()
// to perform addition of two integers, three integers, and two floating-point numbers.

#include <iostream>
using namespace std;
class Calculator
{
    public:
        int add(int a,int b)
        {
            return a + b;
        }
        int add(int a,int b,int c)
        {
            return a + b + c;
        }
        float add(float a,float b)
        {
            return a + b;
        }
};
int main()
{
    Calculator c;
    cout << c.add(10,20) << endl;
    cout << c.add(10,20,30) << endl;
    cout << c.add(10.5f,20.5f) << endl;
    return 0;
}
