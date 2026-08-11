// Write a program to create a class Time
// with data members hour, minute and second. 
// Use a default constructor to initialize all data members to 0 and display the time.

#include<iostream>
using namespace std;
class Time
{
    private:
        int hour,minute,second;
    public:
        Time()
        {
            hour = 0;
            minute = 0;
            second = 0;
        }

        void display()
        {
            cout<<"Time: "<<hour<<":"<<minute<<":"<<second<<endl;
        }
};
int main()
{
    Time t;
    t.display();
    return 0;
}