// Write a C++ program to demonstrate the use of the this pointer 
// by creating a class Box containing the data members length, width, and height. 
// Use this pointer to resolve the ambiguity between local variables and data members 
// and calculate the volume.

#include <iostream>
using namespace std;
class Box
{
    int length,width,height;
    public:
        void set(int length, int width, int height)
        {
            this->length = length;
            this->width = width;
            this->height = height;
        }

        void volume()
        {
            cout<<"Volume of Box: "<<this->length * this->width * this->height;
        }
};
int main()
{
    Box b;
    b.set(10,5,3);
    b.volume();
    return 0;
}
