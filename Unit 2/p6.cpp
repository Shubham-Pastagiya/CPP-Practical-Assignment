// Demonstrate the execution order of constructors and destructors
// using base class Base and derived class Derived. 
// Display appropriate messages from each constructor and destructor.

#include <iostream>
using namespace std;
class Base
{
    public:
        Base()
        {
            cout<<"Base Constructor"<<endl;
        }
        ~Base()
        {
            cout<<"Base Destructor"<<endl;
        }
};
class Derived : public Base
{
    public:
        Derived()
        {
            cout<<"Derived Constructor"<<endl;
        }
        ~Derived()
        {
            cout<<"Derived Destructor"<<endl;
        }
};
int main()
{
    Derived d;
    return 0;
}
