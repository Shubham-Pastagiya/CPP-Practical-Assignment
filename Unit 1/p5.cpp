// Write a C++ program to create a class Date with private data members
// day, month and year. Provide a member function to check whether the
// date is valid or not.

#include <iostream>
using namespace std;
class Data
{
    private:
        int day,month,year;
    public:
    void input()
    {
        cout<<"Enter Day: ";
        cin>>day;
        cout<<"Enter Month: ";
        cin>>month;
        cout<<"Enter Year: ";
        cin>>year;
    }
    void check()
    {
        if(month > 12 || month < 1 || day < 1)
        {
            cout<<"Invalid Date";
        }
        else if(month == 2 && day > 28)
        {
            cout<<"Invalid Date";
        }
        else if((month == 4 || month == 6 || month == 9 || month == 12) && day > 30)
        {
            cout<<"Invalid Date";
        }
        else if(day > 31)
        {
            cout<<"Invalid Date";
        }
        else
        {
            cout<<"Valid Date";
        }
    }
};
int main()
{
    Data d1;
    d1.input();
    d1.check();
    return 0;
}
