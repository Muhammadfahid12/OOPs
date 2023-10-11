//multilevel inheritance

#include <iostream>
using namespace std;

class Libraryitem
{
    string title;

protected:
    int itemID;
    bool isCheckedOut;

public:
    Libraryitem()
    {
        title = "";
        itemID = 0;
        isCheckedOut = false;

        cout << "\nConstructor of Library Item Called " << endl;
    }

    void displayInfo()
    {
        cout << "Title : " << title << endl;
        cout << "ItemID : " << itemID << endl;
        cout << "isCheckedOut" << (isCheckedOut ? "Yes" : "No") << endl;
    }

    string getTitle()
    {
        return title;
    }
};

class Book : public Libraryitem
{

    string author;

public:
    Book()
    {
        author = "Unknown Author";
    }
    void BookInfo()
    {
        cout << getTitle() << endl;
        cout << itemID << endl;
        cout << isCheckedOut << endl;
        cout << author << endl;
    }
};

class DVD : public Libraryitem
{

    string Director;

public:
    DVD()
    {
        Director = "Unknown Director";
    }
};

// inherit from class Book
class EBook : public Book
{
    string format;

public:
    // EBook()
    // {

    // }
};

int main()
{
    Book bookObj;

    bookObj.displayInfo();

    Libraryitem LibObj;

    // LibObj.BookInfo() gives us error because this attribute is not present in Libraryitem;

    EBook value;
    value.displayInfo();
    return 0;
}
