// bulding a better Calculator
#include <iostream>
 using namespace std;

 int main(void) {

    int num1 , num2;
    char op;

    cout<<"Enter 1st num.";
    cin>>num1;
    cout<< "Enter an operator.";
    cin>> op; 
    cout<< "Enter 2nd numr.";
    cin>> num2; 

    int result;

    if(op == '+') {
       result = num1+num2;
    } else if(op == '-') {
       result = num1-num2;
    } else if(op == '/') {
       result = num1/num2;
    } else if(op == '*') {
       result = (num1*num2) ;
    }  else {
       cout<<"invalid operator.";
    }

    cout<<result;
    


    
    return 0;
 }