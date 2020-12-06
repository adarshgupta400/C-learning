// return statement  (return will breaking out of function, no lines will run after return statement in the function.)
#include <iostream>
 using namespace std;


double cube(double num){       /*returning type of cube fun is double ie result is being returned by func which is double type.*/
     double result = num * num * num;
     return result;   // break out of cube func nd head back to main function.

     /*here we can also directly (return num* num * num)  without declaration of ny variable*/
}
 int main(void) {

     cout<< cube(6);

    return 0;
 }

