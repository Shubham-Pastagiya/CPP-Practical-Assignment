// Write a C++ program to demonstrate friend function operator overloading
// by creating a class Complex and using a friend function to 
// overload the multiplication (*) operator.

#include <iostream>
using namespace std;
class Complex
{
    int A,B;
    public:
        Complex(int a,int b)
        {
            A = a;
            B = b;
        }

        friend Complex operator*(Complex c1,Complex c2);

        void display()
        {
            cout<< A << "+" << B;

        }
};
Complex operator*(Complex c1, Complex c2)
{
    Complex temp(0,0);

    temp.A = (c1.A * c2.A) - (c1.B * c2.B);
    temp.B = (c1.A * c2.B) + (c1.B * c2.A);
    
    return temp;

}
int main()
{
    Complex c1(2,3),c2(4,5);
    Complex result = c1 * c2;

    cout<<"First Complex Number: ";
    c1.display();

    cout<<"\nSecond Complex Number: ";
    c2.display();

    cout<<"\nResult of Multiplication: ";
    result.display();
    return 0;
}
