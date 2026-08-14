// Create a base class Vehicle with protected members vehicleNo and companyName.
//  Derive a class Car from Vehicle and display the protected members.

#include <iostream>
using namespace std;
class Vehicle
{
    protected:
        int vehicleNo;
        string companyName;
};
class Car : public Vehicle
{
    public:
        void input()
        {
            cout<<"Enter Vehicle Number: ";
            cin>>vehicleNo;
            cout<<"Enter Company Name: ";
            cin>>companyName;
        }
        void display()
            {
                cout<<"Vehicle No: "<<vehicleNo<<endl;
                cout<<"Company Name: "<<companyName<<endl;
            }
};
int main()
{
    Car c;
    c.input();
    c.display();
    return 0;
}
