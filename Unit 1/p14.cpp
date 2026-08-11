// Write a program to create a class Complex 
// with real and imag as data members.
// Use a constructor with default arguments to initialize them.
// Display the complex number

#include <iostream>
using namespace std;
class Complex
{
    private:
        int real,imaged;
    public:
        Complex(int r = 0,int i = 0)
        {
            real = r;
            imaged = i;
        }
        void display()
        {
            cout<<"Complex Number: "<<real<<" + "<<imaged<<"i"<<endl;
        }
};
int main()
{
    Complex c1;
    c1.display();
    return 0;
}
