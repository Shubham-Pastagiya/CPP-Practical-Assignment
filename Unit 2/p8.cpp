// Create a base class Number that accepts two integers.
// Derive a class Calculator from Number to perform addition, subtraction, multiplication and division
// and display the results.

#include <iostream>
using namespace std;
class Number
{
    public:
        int n1,n2;

        void input()
        {
            cout<<"Enter Number 1: ";
            cin>>n1;
            cout<<"Enter Number 2: ";
            cin>>n2;
        }
};
class Calculator : public Number
{
    public:
        void add()
        {
            cout<<"\nAddition Of Numbers: "<<n1 + n2<<endl;
        }
        void sub()
        {
             cout<<"Subtraction Of Numbers: "<<n1 - n2<<endl;
        }
        void mul()
        {
            cout<<"Multiplication Of Numbers: "<<n1 * n2<<endl;
        }
        void div()
        {
            cout<<"Division Of Numbers: "<<(float)n1 / n2<<endl;
        }
};
int main()
{
    Calculator c;
    c.input();
    c.add();
    c.sub();
    c.mul();
    c.div();
    return 0;
}
