// Write a C++ program to create a class Number with a private integer
// data member. Overload the ++ operator (both prefix and postfix) to
// increment the value

#include<iostream>
using namespace std;
class Number
{
    private:
        int n;
    public:
    void input()
    {
        cout<<"Enter Number: ";
        cin>>n;
    }
    void operator++()
    {
        ++n;
    }
    void operator++(int)
    {
        n++;
    }
    void display()
    {
        cout<<"Number: "<<n<<endl;
    }
};
int main()
{
    Number n1;
    n1.input();
    ++n1;
    cout<<"After Prefix: ";
    n1.display();
    n1++;
    cout<<"After Postfix: ";
    n1.display();
    return 0;
}