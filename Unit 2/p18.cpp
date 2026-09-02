// Write a C++ program to demonstrate user-defined conversion by 
// creating a class Time that converts hours and minutes into 
// the total number of minutes using a conversion function.

#include <iostream>
using namespace std;
class Time
{
    int hours,minutes;
    public:
        Time(int h,int m)
        {
            hours = h;
            minutes = m;
        }

        operator int()
        {
            return (hours * 60) + minutes;
        }
};
int main()
{
    Time t1(2,30);
    int total = t1;
    cout<<"Total Minutes: "<<total;
    return 0;
}
