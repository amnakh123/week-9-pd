#include<iostream>
using namespace std;
bool isLengthEven(string word);
main()
{
    string word;
    cout<<"Enter a String: ";
    cin>>word;
     isLengthEven(word);
     if( isLengthEven(word)){
        cout<< "1";
     }
     else{
        cout<< "0";
     }
}
bool  isLengthEven(string word)
{
    
   return word.length()%2 == 0;
}