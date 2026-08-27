// Write a C++ program to demonstrate binary operator overloading 
// by creating a class Complex and overloading the addition (+) operator 
// to add two complex numbers.

#include <iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
        Complex(int r=0,int i=0)
        {
            real = r;
            imag = i;
        }
        Complex operator+(Complex c)
        {
            Complex temp;
            temp.real = real + c.real;
            temp.imag = imag + c.imag;
            return temp;
        }
        void display()
        {
            cout<< real << "+" << imag << "i";
        }
};
int main()
{
    Complex c1(3,4),c2(5,6),c3;
    c3 = c1 + c2;
    cout<<"Sum: ";
    c3.display();
    return 0;
}
