#include <iostream>
using namespace std;

class Book
{
    int bookno;
    string bookname;

public:
    void getdata()
    {
        cout << "Book Number: " << bookno << std::endl;
        cout << "Book Name: " << bookname << std::endl;
    }
    void putdata() {
    
        cout << "enter Book No. " << endl;
        cin >> bookno;
        cout << "enter Book name: " << endl;
        cin >> bookname;
        this->bookno = bookno;
        this->bookname = bookname;
    }
};

class Author
{
    string authorname;
    string publisher;

public:
    void getdata()
    {
        cout << "Enter author name: " << endl;
        cin >> authorname;
        cout << "Enter publisher: " << endl;
        cin >> publisher;
    }
    void showdata()
    {
        cout << "Author Name: " << authorname << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

class Pages : public Author, public Book
{
    int numOfPages;
    int yop;
    public:
    void getdata()
    {
        Book::putdata();
        Author::getdata();
        cout << "Enter number of pages: " << endl;
        cin >> numOfPages;
        cout << "Enter year of publication: " << endl;
        cin >> yop;
    }

    void showdata()
    {
        Book::getdata();
        Author::showdata();
        cout << "Number of Pages: " << numOfPages << endl;
        cout << "Year of Publication: " << yop << endl;
    }
};


int main()
{
    int numBooks = 2;
    Pages books[numBooks];

    for (int i = 0; i < numBooks; ++i)
    {
        cout << "Enter details for book " << i + 1 << std::endl;
        books[i].getdata();
    }

    std::cout << "\nDisplaying Book Information:\n";
    for (int i = 0; i < numBooks; ++i)
    {
        cout << "\nBook " << i + 1 << ":\n";
        books[i].showdata();
    }
    return 0;
}