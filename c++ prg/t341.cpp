// Getters and Setters
//they allow u to control the access to diff attributes and diff elements in c++ classes.
//help to set and get values of any var in a given limited set of predefined values. 
#include<iostream>
using namespace std;

class Movie{
     private:   //Private means only class programm(movie and movie constructor both ahve access.) have access to this part of code i,e. private.
         string rating;   //rating is private here so cannot be directly printed or set

     public:    //public refers the of program to all other classes and function.
        string title;
        string director;
     
        Movie(string Title, string Director , string Rating){
             title = Title;
             director = Director;
            setRating(Rating);
        }

        void setRating(string Rating ){
             if( Rating=="G"|| Rating=="PG"|| Rating=="PG-13" || Rating=="R"|| Rating=="NR"){
                  rating = Rating;
             } else{
                    rating = "Unknown";
             }

        }

        string getRating(){
             return rating;
        }
};
int main() {
     Movie avengers("The Avengers", "Joss Whedon" , "PG-13");

     //avengers.rating="dog";  not alloweed
     // cout<< avengers.rating; cannot print rating directly (private var)
     cout<<avengers.getRating()<<endl ;
     avengers.setRating("dog");
     cout<<avengers.getRating() ;

     return 0;
}