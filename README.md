# C-
C++ study and practice

## Object-oriented programming (OOP)
It is a method of organizing the architecture of a project based on data and objects.
In this way of programming, it is usually easier to abstract how its many components behave and interact with one another.

Compared with C language, classes are an extension of **structures**, with improved encapsulation and features.

## Classes
A class is a structure that is composed of attributes, constructors, and functions.
A class is a blueprint of an object.

An **object** is an instance of a class.

### Create a class
In C++, classes are created using the following structure
    
    class Person {          // Class declaration
        public:             // Access modifier, data accessible outside the Class scope
            string Name;    // Attributes of a Person
            int Age;
            string Gender;
    };

### Create an object
    class Person {          // Class declaration
        public:             // Access modifier, data accessible outside the Class scope
            string Name;    // Attributes of a Person
            int Age;
            string Gender;
    };
    int main (int argc, char** argv) {
        Person Myself;      // Myself is an object, an instance of the class Person
    }

### Encapsulation

 - Public: Data and functions accessible outside the class scope.
 - Private: Data and functions with this access type can only be accessed inside the class. To change the value of these variables **Getters** and **Setters** are needed.
 - Protected: It is similar to the **Private** access, but in this case subclasses (child classes) can also access the attributes and functions.

### Constructor

    class Person {          // Class declaration
        public:             // Access modifier, data accessible outside the Class scope
            string Name;    // Attributes of a Person
            int Age;
            string Gender;
            
            Person( string pName, int pAge, string pGender ) { // Constructor
                Name = pName;
                Age = pAge;
                Gender = pGender;
            }
    };
    int main (int argc, char** argv) {
        Person Myself = Person( "Vilmey", 27, "male" ); // Myself is an object, an instance of the class Person
        Person Person2( "Eve", 20, "female" );
    }
Whenever a class is created a default constructor is created as well.
Constructors can be used to ensure that certain attributes are filled whenever an object is created.
A constructor should have no return type and the function name should be the same as the class.

### Object Functions

Classes can have functions, like **Getters**, **Setters** or other specific functions.


    class Person {          // Class declaration
        private:            // Access modifier, data accessible inside the Class scope
            string Name;    // Attributes of a Person
            int Age;
            string Gender;
            
        public:             // Accessible outside the class
            Person( string pName, int pAge, string pGender ) { // Constructor
                Name = pName;
                Age = pAge;
                Gender = pGender;
            }
            string GetName() {  // Getter function
                return Name;    // Pivate attribute
            }
            void SetName( string pName ) {  // Setter function
                Name = pName;               // Private attr cannot be modified outside class
            }
    };
    int main (int argc, char** argv) {
        Person Myself = Person( "Vilmey", 27, "male" ); // Myself is an object, an instance of the class Person
        Person Person2( "Eve", 20, "female" );
        std::cout << Person2.GetName() << std::endl; // Output the name of Person2
    }
    

### Inheritance

We can create a second class, such as Employee. An Employee will have all the attributes a Person has and more. In this case, we can create a subclass of **Person** or a child class.


    class Person {          // Class declaration
        private:            // Access modifier, data accessible inside the Class scope
            string Name;    // Attributes of a Person
            int Age;
            string Gender;
            
        public:             // Accessible outside the class
            Person( string pName, int pAge, string pGender ) { // Constructor
                Name = pName;
                Age = pAge;
                Gender = pGender;
            }
            string GetName() {  // Getter function
                return Name;    // Pivate attribute
            }
            void SetName( string pName ) {  // Setter function
                Name = pName;               // Private attr cannot be modified outside class
            }
    };
    
    class Employee: public Person { // Employee inherits all the attributes Person has
        public:
            string Function;

            // Constructor pass the needed data to the Person constructor
            Employee( string pName, int pAge, string pGender, string pFunction ) : 
                Person ( string pName, int pAge, string pGender ) {
                Function = pFunction;
            }
    };
    
    int main (int argc, char** argv) {
        Person Myself = Person( "Vilmey", 27, "male" ); // Myself is an object, an instance of the class Person
        
        Person Person2( "Eve", 20, "female" );
        std::cout << Person2.GetName() << std::endl; // Output the name of Person2

        Emplyee Employee1("Jhon", 23, "male", "developer" )
        std::cout << Employee1.GetName() << " is a " << Employee1.Function << std::endl; // Output the name and function of the Employee1
    }

### Polymorphism

Polymorphism is a function's ability to take different "forms". The function can perform different tasks depending on the class it belongs to.

    class Intern {
        public:
        void specialAbility(){
            std::cout << "Learn fast" << std::endl;
        }
    };
    
    class Fulltime : public Intern { // Inherits from the Intern
        public:
        void specialAbility(){ // Overrides the special ability of the intern.
            std::cout << "Ask interns to help on boring tasks" << std::endl;
        }
    };

