/*t210-- while loops- a certaion str which has a code which will run again and again untill    (loop over a code for bunch of time) */

#include <iostream>
 using namespace std;

 int main(void) { 
    int i=0;
//while loops
    while(i<5) {
       cout<<i<<endl;
       i++;
    }


 //be careful with infinite loops(conds must terminate somewhere in time.) because system will not stop ,and loop forever.

 //do-while loops
do{
   cout<<i<<endl;
   i++;
} while(i<10);   //check do while syntax carefully, do{  }while(  );    scolon is neccessary in do while,and do while will always run atleast once in system.


    return 0;
 }
