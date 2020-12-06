//functions in c++
// fx is a collection of code that perform a specific task 
#include <iostream>
 using namespace std;

 //creating function to say hii ,returns null so used Void and we can use this fx unlimited times to say  hii by calling it. 
 // main is also a fun which need not to be called .

 void sayHi(string name , int age) ;   //fun stub or signature so that function can be written anywher  ,not neccessarily before main().

 int main(void) {
    
	sayHi("Adarsh" , 22);   // adarsh is gonna stored in name var.
     sayHi("Kalash" , 21); 
     sayHi("Hritik" , 26); 

    return 0;
 }
 // functions are useful because they can be use any no of times.

 void sayHi(string name, int age) {        // pass a parameter ,giving some info to fun
  cout << "Hello " <<name<<"!"<< " You are "<<age << endl ;
 }