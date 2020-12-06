//build a guessing game
  #include <iostream>

  using namespace std;

int main() {
    int secnum=7;
    int guess;
    int guesslimit=3;
    int guesscount=0;
    bool outofguesses = false;

     while(secnum!=guess  && !outofguesses){
         if(guesscount <guesslimit){
              
              cout<<"enter  guess:";
              cin>>guess;
                guesscount++;
         } else{
              outofguesses = true;
         }


     }
     if(outofguesses){
          cout<<"u lose!";
     } else {
       cout<<"hurray! You won!.....";   
     }


     return 0;
}