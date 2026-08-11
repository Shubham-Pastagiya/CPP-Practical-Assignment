// Write a program to create a class String 
// with a dynamic constructor that allocates memory 
// for a string entered by the user.

#include <iostream>
using namespace std;
class String
{
    private:
        char *str;
    public:
        String(int size)
        {
            str = new char[size];
        }
        void input()
        {
            cout<<"Enter String: ";
            cin.getline(str,50);
        }
        void display()
        {
            cout<<"String: "<<str<<endl;
        }
        ~String()
        {
            delete[] str;
        }
};
int main()
{
    String s(50);
    s.input();
    s.display();
    return 0;
}
