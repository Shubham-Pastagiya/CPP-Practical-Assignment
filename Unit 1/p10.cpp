// Write a C++ program to create a class Time with private data members
// hour, minute and second. Overload the == operator to compare two
// Time objects for equality.

#include <iostream>
using namespace std;
class Time
{
    private:
        int hour,minute,second;
    public:
        void input()
        {
            cout<<"Enter Hour: ";
            cin>>hour;
            cout<<"Enter Minute: ";
            cin>>minute;
            cout<<"Enter Second: ";
            cin>>second;
        }
        void operator==(Time t)
        {
            if(hour == t.hour && minute == t.minute && second == t.second)
                cout<<"Both Times Are Equal";
            else
                cout<<"Both Times Are Not Equal";
        }
};
int main()
{
    Time t1,t2;
    cout<<"Enter First Time: "<<endl;
    t1.input();
    cout<<"Enter Secomd Time: "<<endl;
    t2.input();
    t1==t2;
    return 0;
}
