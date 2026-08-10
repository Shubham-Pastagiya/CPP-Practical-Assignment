// Write a C++ program to create a class Circle with private data
// member radius. Provide a member function to calculate and return
// the area of the circle.

#include <iostream>
using namespace std;
class Circle
{
    private:
    float radius,area;
    public:
    void input()
    {
        cout<<"Enter Radius: ";
        cin>>radius;
    }

    void Calc()
    {
        area = 3.14*radius*radius;
    }

    void dis()
    {
        cout<<"Area Of Circle: "<<area<<endl;
    }
};
void clearScreen()
{
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}


int main()
{
    clearScreen();
    Circle c1;
    c1.input();
    c1.Calc();
    c1.dis();
    return 0;
}
