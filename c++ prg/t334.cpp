//object Functions(or  instance functions)
//its a function that can be put inside our classes and then diff objects of tht class can use this function in order to find info about themselves or modify information about themselves.
#include<iostream>
using namespace std;

class Student {
     public:
        string name;
        string major;
        double gpa;
     Student(string Name, string Major, double Gpa) {
          name= Name;
          major = Major;
          gpa = Gpa;
     }

     //here this object func used to tell that a student is on Honor role or not on basis of thier gpa >3.5 
     bool hasHonors (){
          if(gpa >= 3.5){
               return true;
          }
               return false;
     }
};
int main() {
     Student student1("mike","cse",3.8);
     Student student2("pam", "arts", 2.3);
     cout<< student2.hasHonors()<<endl;
     cout<< student1.hasHonors();
//benifit of object function 
//is that if we needed to change the gpa qualifications for honors then can be done easily using same object function.
// these fun can adjust diff things and control all the class.

     return 0;
}