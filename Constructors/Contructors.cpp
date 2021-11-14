#include <iostream>

using namespace std;

/* The class - A blueprint of a book */
class Book
{
    public:
        string title;
        string author;
        int pages;

        /* Constructor that will be called upon creation of the object */
        Book( string aTitle, string aAuthor, int aPages )
        {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
        /* In the case no arguments are passed */
        Book()
        {
            title = "NoTitle";
            author = "NoAuthor";
            pages = 0;
        }

        void BookInfo()
        {
            cout << "Title: "<< title << endl;
            cout << "Author: "<< author << endl;
            cout << "Pages: "<< pages << endl;

        }
};

int main( int argc, char** argv )
{
    /* Attributes of the object */
    Book book1("Outwitting the devil", "Napoleon Hill", 200); /* Creates an object based on the blueprint */
    book1.BookInfo();

    /* Attributes of the object */
    Book book2("The subtle art of not giving a f*ck", "Mark Manson", 231); /* Creates an object based on the blueprint*/
    book2.BookInfo();
    
    return 0;
}