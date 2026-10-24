// Write a C++ program to demonstrate the use of text files and binary files 
// by creating a class Student containing roll number, name, and marks.
// Store the same records in both a text file and a binary file, then
// read and compare the output from both.

#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    int rollno;
    char name[30];
    float marks;

    public:
        void get()
        {
            cout<<"Enter Roll Number: ";
            cin>>rollno;
            cout<<"Enter Name: ";
            cin>>name;
            cout<<"Enter Marks: ";
            cin>>marks;
        }
        void put()
        {
            cout<<"Roll Number: "<<rollno<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Marks: "<<marks<<endl;
        }
};
int main()
{
    Student s;
    fstream textFile, binaryFile;
    int n;

    cout<<"Enter number of students: ";
    cin>>n;

    textFile.open("students.txt", ios::out);
    binaryFile.open("students.dat", ios::out | ios::binary);

    if(textFile.fail() || binaryFile.fail())
    {
        cout<<"Error opening file!";
        return 1;
    }
    for(int i = 0;i < n; i++)
    {
        s.get();
        textFile<<"Student Records\n";
        s.put();
        binaryFile.write((char*)&s, sizeof(s));
    }
    textFile.close();
    binaryFile.close();

    binaryFile.open("students.dat", ios::in | ios::binary);

    if(binaryFile.fail())
    {
        cout<<"Error opening binary file!";
        return 1;
    }

    cout<<"\nRecords Read From Binary File:\n";
    while(binaryFile.read((char*)&s, sizeof(s)))
    {
        s.put();
    }
    binaryFile.close();
    return 0;
}