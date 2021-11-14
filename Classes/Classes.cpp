#include <iostream>

using namespace std;

/* The class - A blueprint of a book */
class Book
{
    public:
        string title;
        string author;
        int pages;
};

int main( int argc, char** argv )
{
    Book book1; /* Creates an object based on the blueprint */

    /* Attributes of the object */
    book1.title = "Outwitting the devil";
    book1.author = "Napoleon Hill";
    book1.pages = 200;

    cout << "Title: "<< book1.title << endl;
    cout << "Author: "<< book1.author << endl;
    cout << "Pages: "<< book1.pages << endl;

    return 0;
}