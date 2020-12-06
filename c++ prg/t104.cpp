//input from user
// for char,int,float  use direct 'cin' but for getting a strng of line  use 'getline(cin,var_name)'


#include <iostream>

using namespace std;
int main() {
     string name;
     cout<<"enter your name";
     getline(cin,name);

     cout<< "hello "<<name; 



     return 0;
}