//Constructor functions
//constructor is gonna get called whenever we create this book's object. contructor can be created by creating anothor funcction in the class.

#include <iostream>
 using namespace std;
 
 class Book{
    public:
       string title;
       string author;
       int pages;
       Book(string name) {         //constructor with arguments
          cout<<"creating a object "<< name<<endl;
       } 
 };
 int main(void) {
    
    Book book1("Harry Potter");
    book1.title="Harry Potter";
    book1.author="JK Rowling";
    book1.pages=500;

    Book book2("Lord of the rings");
    book2.title= "lord of the rings";
    book2.author= "tolkein";
    book2.pages=700;
   

    
    return 0;
 }