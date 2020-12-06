//switch statements(switch is like an if stementment  which allow us to check one particular value to whole bunch of another values.)
#include <iostream>
 using namespace std;

 string getdayofweek(int daynum){
      string dayname;

      switch(daynum){
           case 0:
              dayname = "sunday";
              break;
          case 1:
            dayname = "monday";
            break;
          case 2:
            dayname = "tuesday";
            break;
             case 3:
            dayname = "wednesday";
            break;
             case 4:
            dayname = "thrusday";
            break;
              case 5:
            dayname = "friday";
            break;
              case 6:
            dayname = "saturday";
            break;
          
            deafault:
              dayname = "invalid day number.";


      }
     return dayname;

 }

 int main(void) {
    

      cout<<getdayofweek(6);
    
    return 0;
 }