// Write a C++ program to demonstrate pointers to objects by
// creating a class Complex containing the real and imaginary parts of a complex number. 
// Use an object pointer to access member functions and display the complex number.

#include <iostream>
using namespace std;
class Complex
{
    int real,imag;
    public:
        void set(int r,int i)
        {
            real = r;
            imag = i;
        }
        void display()
        {
            cout<<"Complex Number: "<<real<<" + "<<imag;
        }
};
int main()
{
    Complex *ptr = new Complex;

    ptr->set(5,3);
    ptr->display();

    delete ptr;
    return 0;
}
