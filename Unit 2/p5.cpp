// Create a base class Number with one private and one protected data member.
//  Derive a class Display from Number and show which members can and cannot be accessed.

#include <iostream>
using namespace std;
class Number
{
    private:
        int prinum;
    protected:
        int pronum;
    public:
        void input()
        {
            prinum = 10;
            pronum = 20;
        }
};
class Display : public Number
{
    public:
        void show()
        {
            // cout<<prinum; ->Cannot Accessed Private Member
            cout<<"Private Member Cannot be accessed"<<endl;
            cout<<"Protected Number: "<<pronum<<endl;
        }
};
int main()
{
    Display d;
    d.input();
    d.show();
    return 0;
}
