// Implement a program in C++ to show operations of BOOK-Library. Use Class-object, Constructor-Destructor and Function overloading concepts.

// MENU:

// 1. Display all Books information

// 2. Search Book by author

// 3. Search Book by title

// 4. Book Issue

// 5. Book Return

// 6. Exit

#include <iostream>
#include <string>
using namespace std;

class Library
{
public:
    int bookid;
    string title, author;
    bool issued;

    Library()
    {
        bookid = 0;
        title = "";
        author = "";
        issued = false;
    }
    Library(int bookid,string title,string author)
    {
        this->bookid = bookid;
        this->title = title;
        this->author = author;
    }

    void BookInfo()
    {
        cout<<"Book Information:\nTitle: "<<title<<"\t Id: "<<bookid<<"\t Author: "<<author<<endl; 
    }

    void SearchByAuthor(string Author,Library book)
    {
        if(author==Author)
          cout<<"Book Information:\nTitle: "<<title<<"\t Id: "<<bookid<<"\t Author: "<<author<<endl;  
    }
};




void checkAuthor(string author,Library book1, Library book2,Library book3,Library book4)
    {
        book1.SearchByAuthor(author,book1);
        book2.SearchByAuthor(author,book2);
        book3.SearchByAuthor(author,book3);
        book4.SearchByAuthor(author,book4);
    }

int main()
{
    int n;
    string author,title;
    Library book1(1,"The Da Vinci Code","Dan Brown");
    Library book2(2,"Atomic Habits","James Clear");
    Library book3(3,"Percy Jackson","Rick Riordian");
    Library book4(4,"Murder on the Orient Express","Agatha Christie");
    cout<<"*************************** LIBRARY SYSTEM *********************************\n";    
    while(n!=6)
    {
        cout<<"1. Display all Books information\n2. Search Book by author\n3. Search Book by title\n4. Book Issue\n5. Book Return\n6. Exit\n";
        cin>>n;
        switch (n)
        {
        case 1:
            book1.BookInfo();
            book2.BookInfo();
            book3.BookInfo();
            book4.BookInfo();
            break;
        case 2:
            cout<<"Enter Author Name:"<<endl;
            cin>>author;
            checkAuthor(author,book1,book2,book3,book4);
        default:
            break;
        }
    }

    
    return 0;
}

