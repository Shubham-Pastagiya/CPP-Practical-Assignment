// Write a C++ program to demonstrate random file access 
// using seekg() and seekp() by creating a class Student. 
// Store multiple student records in a binary file and 
// retrieve a specific record using its position.

#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    int rollno;
    char name[30];
    float marks;

    public:
        void in()
        {
            cout<<"Enter Roll No: ";
            cin>>rollno;
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Marks: ";
            cin>>marks;
        }
        void out()
        {
            cout<<"Roll No: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main()
{
    Student s;
    fstream file;
    int n, pos;

    file.open("student.dat", ios::out | ios::binary);

    cout<<"Enter Number of Students: ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        s.in();
        file.seekp(i * sizeof(s));
        file.write((char*)&s, sizeof(s));
    }

    file.close();

    cout<<"\nEnter record position to retrieve (1 to " << n << "): ";
    cin>>pos;

    if(pos < 1 || pos > 1)
    {
        cout<<"Invlaid position!";
        return 0;
    }

    file.open("student.dat", ios::in | ios::binary);
    file.seekg((pos - 1) * sizeof(s));
    file.read((char*)&s, sizeof(s));

    cout<<"\nStudent Records:\n";
    s.out();

    file.close();
}