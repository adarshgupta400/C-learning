//Inheritance
#include<iostream>
using namespace std;

class Chef{
     public:
         void makeChicken() {
              cout<<"the chef makes chicken."<<endl;
         }
         void makeSalad() {
              cout<<"the chef makes salad."<<endl;
         }
         void makeSpecialdish() {
              cout<<"the chef makes BBQ ribs"<<endl;
         }

};

class IndianChef : public Chef {           //class IndianChef is inheriting class Chef.

        //we can even modify the inherited features in IndianChef.
        public:
            void makeSpecialdish() {
              cout<<"the Indian chef makes  Haandi Chicken."<<endl;
         }
           void makeSamosa(){
             cout<<"The Indian chef makes Samosa chhola."<<endl;
           }

};
int main() {
     Chef chef0;
     IndianChef chef1;
     chef0.makeChicken();
     chef1.makeChicken();   //IndianChef is inheriting Chef class here ,example.
     chef1.makeSamosa();

     //can update inherited features in inheriting function.
     chef0.makeSpecialdish();
     chef1.makeSpecialdish();



     return 0;
}