//CLASS AND OBJECTS
//there are so many datatypes in c++ which we can use use like text ,char,string ,float but not all things can be represented using only these datatypes.like a book or a company or a phone
//so classes are specification or blueprint for a new datatype with which we can create any new type of data.

#include <iostream>
 using namespace std;


//class Book is a template or blueprint for the book datatype.
//book can be defined with diff diff attributes and attr are going to be represented by c++ datatypes.
 class Book {
    public:
       string title;
       string author;
       int pages;

 };   //Note- semi colon in last of class and class name is generally block letter.

 int main(void) {
    
//object is an actual instance for that class( or BLUE-PRINT)
//real object created here with actual title and author and pages and infinite objects can be created of same class.

Book book1;
book1.title = "Harry Potter";
book1.author = "J.K. rowling";
book1.pages = 566;

Book book2;
book2.title= "Lord of the rings";
book2.author= "Tolkein";
book2.pages= 700;

cout << book1.title<<endl;
cout<<book2.author;

    return 0;
 }