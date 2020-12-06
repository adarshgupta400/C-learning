//135- if, else, else if    in c++
// intro to &&(and) ,||(or) , !(not) operators in c++
// if else alloow checking diffrent conditions and behave accordingly to thier nature.

#include <iostream>
 using namespace std;

 int main(void) {
      
      bool isMale = false;
      bool isTall = true;

      if(isMale && isTall){
           cout<< "You are a tall male.";
      }  else if(isMale && !isTall){
           cout<<"You are a male but not tall.";
      }  else if(!isMale && isTall){
           cout<<"You are tallbut not male.";
      } else  {
           cout << "You are neither male nor tall.";

      }


    
    return 0;
 }