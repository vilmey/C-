#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/* The class - A blueprint of a book */
class Book
{
    /* Private attributes can only be modified inside the class */
    /* Use Getters and Setters to access and modify*/
    private:
        string availability;
    
    /* Public attributes can be modified outside the class */
    public:
        string title;
        string author;
        int pages;

        /* Constructor that will be called upon creation of the object */
        Book( string aTitle, string aAuthor, int aPages, string aAvailability )
        {
            title = aTitle;
            author = aAuthor;
            pages = aPages;
            setAvailability( aAvailability );
        }
        /* In the case no arguments are passed */
        Book()
        {
            title = "NoTitle";
            author = "NoAuthor";
            pages = 0;
            availability = "not available";
        }

        /* Object function */
        void bookInfo()
        {
            cout << "Title: "<< title << endl;
            cout << "Author: "<< author << endl;
            cout << "Pages: "<< pages << endl;

        }
        /* Getter */
        bool isBookAvailable()
        {
            if( availability.compare("in stock") == 0 )
            {
                cout << "Book is available " << endl;
                return true;
            }
            else
            {
                cout << "Book is not available" << endl;
                return false;
            }
        }
        /* Setter */
        void setAvailability( string aAvailability )
        {
            if( aAvailability.compare("in stock") == 0)
            {
                availability = "in stock";
            }
            else if (aAvailability.compare("not available") == 0)
            {
                availability = "not available";
            }
            else
            {
                availability = "not available";
            }
        }
};

int main( int argc, char** argv )
{
    /* Attributes of the object */
    Book book1("Outwitting the devil", "Napoleon Hill", 200, "not available"); /* Creates an object based on the blueprint */
    /* Call object function */
    book1.bookInfo();
    cout << book1.isBookAvailable() << endl;
    
    /* Call setter to modify private attibute */
    book1.setAvailability("in stock");
    cout << book1.isBookAvailable() << endl;
    
    /* Attributes of the object */
    Book book2("The subtle art of not giving a f*ck", "Mark Manson", 231, "in stock"); /* Creates an object based on the blueprint*/
    book2.bookInfo();
    cout << book2.isBookAvailable() << endl;
    
    return 0;
}