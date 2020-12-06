//Pointers in c++
/*pointer are just another tye of data which are memory address. */

#include <iostream>
 using namespace std;

 int main(void) {
    int age= 22;
    double gpa = 2.7;
    string name = "mike";

    cout << &age<<endl;  //mpercent to get address of variable in memeory  , physical memory adderess

//creating a pointer variable to store  a pointer .pointers are created with a star(astrick). type of pointer will be of type which we are going to store in it.

   int *pAge= &age;
   double *pGpa= &gpa;
   string *pName= &name;

  cout<<pAge<<endl;  


//pointer is a memory address,
//Defrencing a ptr-- going and grabing out the value at the ptr or at the memory address.

cout<< *pAge<<endl;  //derefrencing pAge , grabbing value at it. i e,19

//&gpa is a memory adddress or pts so we can derefrence it too using just a astrik.
cout<< *&gpa<<endl;
// &- gives the address ,  * --gives the value at.



    return 0;
 }