// Write a C++ program to compare the two methods of user-defined conversion 
// by creating a class Time that converts an integer value 
// into a Time object using a constructor and 
// also converts a Time object back into an integer using a conversion operator. 
// Display the results of both conversion methods.

#include <iostream>
using namespace std;
class Time
{
    int minutes;
    public:
        Time(int m)
        {
            minutes = m;
        }
        operator int()
        {
            return minutes;
        }
        void display()
        {
            cout<<"Time: "<<minutes / 60 <<" hours "<<minutes % 60 <<" minutes"<<endl;
        }
};
int main()
{
    int value = 150;
    Time t = value;

    cout<<"Integer to Time: "<<endl;
    t.display();

    int total = t;

    cout<<"Time to Integer: "<<endl;
    cout<<"Total Minutes: "<<total;
    return 0;
}
