// Write a C++ program to demonstrate pointers to members. Create a class
// Book with data members title and price and a member function display().
// Use pointer to data members and pointer to member function to access
// and call them.

#include <iostream>
using namespace std;
class Book
{
    public:
        string title;
        float price;
    
        void display()
        {
            cout<<"Book Title: "<<title<<endl;
            cout<<"Book Price: "<<price<<endl;
        }
};
int main()
{
    Book b1;
    b1.title = "C++ Programming";
    b1.price = 300.00;

    string Book::*p1 = &Book::title;
    float Book::*p2 = &Book::price;
    void (Book::*p3)() = &Book::display;

    (b1.*p3)();
    return 0;
}
