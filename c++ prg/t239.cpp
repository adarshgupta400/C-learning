//build a exponent function.

#include <iostream>
 using namespace std;

int power(int basenum,int pownum){
     
     int result=1;
     for(int i=0; i<pownum; i++){
          
          result=result*basenum;
     }
     return result;

}
 int main(void) {
      cout<<power(2,4);
   
   
    return 0;
 }