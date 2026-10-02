// Write a C++ program to demonstrate opening and closing files
// by creating a class Book containing book ID, book name, and price. 
// Write the details into a file and then read them back after reopening the file.

#include<iostream>
#include<fstream>
using namespace std;
class Book
{
    public:
        int BookId;
        string BookName;
        float price;
};
int main()
{
    Book b;

    cout<<"Enter Book ID: ";
    cin>>b.BookId;
    cout<<"Enter Book Name: ";
    cin>>b.BookName;
    cout<<"Enter Book Price: ";
    cin>>b.price;
    
    ofstream file;
    file.open("book.txt");

    file<<b.BookId<<endl;
    file<<b.BookName<<endl;
    file<<b.price<<endl;

    file.close();

    ifstream file2;
    file2.open("book.txt");

    cout<<"\nBook Details:\n";
    file2>>b.BookId;
    file2>>b.BookName;
    file2>>b.price;

    cout<<"Book ID: "<<b.BookId<<endl;
    cout<<"Book Name: "<<b.BookName<<endl;
    cout<<"Book Price: "<<b.price<<endl;

    file2.close();
    return 0;
}