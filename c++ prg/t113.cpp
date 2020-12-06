//Arrays
#include<iostream>

using namespace std;
int main() {

     //declaring an array with [] and intiating with {}
     int luckyNums[20] = {4,5,6,2,1,8} ;  // giving a bigger size to array is better so that later elements can be added.

     luckyNums[0] = 9;    //updating and later printing
      cout<< luckyNums[0];    //arrays indexing from 0

     luckyNums[12]=0;
     cout<<luckyNums[12];


     return 0;
}