#include<iostream>
using namespace std;
void convertPINToDance(string PIN);
main()
{
    string digits;
    cout<<"Enter your PIN (4 digits): ";
    cin>>digits;
    if(digits.length()<4){
        cout<<"Invalid Input.";
    }
    else{
    convertPINToDance(digits);
    }
}
void convertPINToDance(string PIN)
{

    
   string Moves[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado",
"Pop", "Lock", "Arabesque"};

   for(int i=0;PIN[i]!='\0';i++){
   int count=PIN[i]-'0';

    int g=count + i;
    if(g==13){
        g=3;
    }
    if(g==12){
        g=2;
    }
    if(g==11){
     g=1;
    }
    if(g==10){
        g=0;
    }

    cout<<Moves[g];
    if(g!=3){

        cout<<",";
    }

   }
}