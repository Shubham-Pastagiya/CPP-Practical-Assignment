// Write a C++ program to demonstrate user-defined conversion 
// by creating a class Distance that
// converts a distance in meters into kilometers using a conversion operator.

#include <iostream>
using namespace std;
class Distance
{
    float meter;
    public:
        Distance(float m)
        {
            meter = m;
        }
        operator float()
        {
            return meter / 1000;
        }
};
int main()
{
    Distance d(2500);
    float kilometers = d;
    cout<<"Distance in kilometers: "<<kilometers;
    return 0;
}
