//1:09  Building a mad libs games
#include<iostream>

using namespace std;

int main() {

    string color,pluralNoun,celebrity;

    cout<<"Enter a color";
    getline(cin,color); 

      cout<<"Enter a pluralNoun";
    getline(cin,pluralNoun); 

      cout<<"Enter a celebrity";
    getline(cin,celebrity); 

    cout<<"Roses are "<<color<<endl;
    cout<<pluralNoun<<" is blue "<<endl;
    cout<<" i love "<<celebrity<<endl;

     return 0;
}