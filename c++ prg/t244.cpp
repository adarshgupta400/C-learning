//2d arrays (each element is another array)and  nested loops(loop in loop) .

#include <iostream>
 using namespace std;

 int main(void) {

      int numberGrid[3][2] = {
                              {1,2},
                              {1,5},
                              {6,9}

                          };     //an array with 3 elemnts    in which each elemt is an arrray of 2 elemts
    // cout<< numberGrid[1][2];
     for(int i=0;i<3; i++){
          for(int j=0 ; j<2 ; j++){
               cout<< numberGrid[i][j];
          }
          cout<<endl;
     }

    
    return 0;
 }



 //t255----Comments --not going to executed, just to help user understand his own code,  used in 2 ways,  // or by /*  */
 /*
 multiple line comments are here. 
 big use -- Sometimes developers use comments to not delete a line of code ,  u can comment it out and later see that code also.
 
 */