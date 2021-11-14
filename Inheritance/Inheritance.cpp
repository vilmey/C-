#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/* Superclass */
/* Class for intern Engineers */
class InternEngineer
{
    public:
        /* Attributes that inters can do*/
        void makeCode()
        {
            cout << "The engineer can code" << endl;
        }
        void makeDebug()
        {
            cout << "The engineer can debug code." << endl;
        }
        void specialAttribute()
        {
            cout << "The engineer can take breaks to learn more." << endl;
        }
        
};

/* Subclass */
/* Class for junior engineers inherits all the attributes that interns have*/
class JuniorEngineer : public InternEngineer
{
    public:
        /* Attributes that juniors can do*/
        void makeDocuments()
        {
            cout << "The engineer can make documents" << endl;
        }
        void makeChanges()
        {
            cout << "The engineer can make changes on the hardware" << endl;
        }
        /* Override the specialAttribute from Intern*/
        void specialAttribute()
        {
            cout << "The engineer can give assignments to the intern. " << endl;
        }
        
};

int main ( int argc, char** argv )
{
    InternEngineer internEng;
    internEng.makeCode();
    internEng.specialAttribute();

    JuniorEngineer juniorEng;
    juniorEng.makeCode(); /* Inherites the attibute from the intern */
    juniorEng.specialAttribute(); /* Special attribute averride */
    return 0;
}