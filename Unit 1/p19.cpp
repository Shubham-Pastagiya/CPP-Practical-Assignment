// Write a program to create a class Matrix 
// that allocates memory dynamically in constructor. 
// Use destructor to deallocate the memory.

#include <iostream>
using namespace std;
class Matrix
{
    private:
        int rows,cols;
        int **mat;
    public:
        Matrix(int r,int c)
        {
            rows = r;
            cols = c;

            mat = new int*[rows];
            for(int i = 0; i < rows; i ++)
            {
                mat[i] = new int[cols];
            }
            cout<<"Memory Allocated."<<endl;
        }
        ~Matrix()
        {
            for(int i = 0;i < rows; i ++)
            {
                delete[] mat[i];
            }

            delete[] mat;
            cout<<"Memory Deallocated."<<endl;
        }
};
int main()
{
    Matrix m(2,3);
    return 0;
}
