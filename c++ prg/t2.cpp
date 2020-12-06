//working with strings

#include <iostream>
using namespace std;
 int main() {
     cout<<"giraffe \nacedamy \n";  //can use \n for new line in strings
      cout<< "hello" <<endl;
     
    string phrase = "adarsh gupta";
    cout<<phrase <<endl;
    // now we will see some string functions.
    cout<<phrase.length()<<endl;  // string func for calculating lenths of string and generally function are putted with a dot (.)and funtion name.
    cout<<phrase[2] <<endl;//accessing char/s of strings and (any string is indexed from 0).
  
    phrase[1] = 'b'; //modifying a char in strings   
     cout<<phrase <<endl;
    
   

    cout<< phrase.find('gup',0)<<endl; //to find a apart od sring and its position , give  arguments(parameters), word to find and position,

    cout<< phrase.substr(8,3); //substr allow us to take a part of string given 2 arguments ,1st is after where to start and 2nd is how many chars u want to take.
    string subphrase=phrase.substr(8,3);
    cout<<subphrase;


   return 0;
 }
