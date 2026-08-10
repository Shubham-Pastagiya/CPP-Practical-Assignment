// Write a C++ program to create a class Matrix with 2D array as a private
// data member. Overload the + operator to add two matrices and return
// the result.

#include <iostream>
using namespace std;
class Matrix
{
    private:
        int a[2][2];
    public:
        void input()
        {
            cout<<"Enter Matrix Elements: ";
            for(int i = 0; i < 2; i ++)
            {
                for(int j = 0; j < 2; j ++)
                {
                    cin>>a[i][j];
                }
            }
        }
        Matrix operator+(Matrix m)
        {
            Matrix result;
            for(int i = 0; i < 2; i ++)
            {
                for(int j = 0; j < 2; j ++)
                {
                    result.a[i][j] = a[i][j] + m.a[i][j];
                }
            }
            return result;
        }
        void display()
        {
            for(int i = 0; i < 2; i ++)
            {
                for(int j = 0; j < 2; j ++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout << endl;
            }
        }
};
int main()
{
    Matrix m1,m2,m3;
    cout<<"Enter First Matrix:\n";
    m1.input();
    cout<<"Enter Second Matrix:\n";
    m2.input();
    m3 = m1+m2;
    cout<<"Result Matrix:\n";
    m3.display();
    return 0;
}
