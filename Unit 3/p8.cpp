// Write a C++ program to create a user-defined manipulator named line() 
// that outputs a horizontal line. Use the manipulator to 
// display the details of a class Product containing product ID, product name, and price.

#include<iostream>
using namespace std;
ostream& line(ostream& output)
{
    output<<"------------------------------";
    return output;
}
class Product
{
    int id;
    char name[30];
    float price;

    public:
        void get()
        {
            cout<<"Enter Product ID: ";
            cin>>id;
            cout<<"Enter Product Name: ";
            cin>>name;
            cout<<"Enter Product Price: ";
            cin>>price;
        }
        void put()
        {
            cout<<line<<endl;
            cout<<"Product Details"<<endl;
            cout<<line<<endl;

            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Price: "<<price<<endl;

            cout<<line<<endl;
        }
};
int main()
{
    Product p;
    p.get();
    cout<<endl;
    p.put();
    return 0;
}