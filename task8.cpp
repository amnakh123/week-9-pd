#include<iostream>
using namespace std;
string findBrokenKeys(string correctPhrase, string actualTyped);
bool isString(char character, string line);
main()
{
    string correctPhrase, actualTyped;
    cout<<"Enter the correct phrase: ";
    getline(cin, correctPhrase);
    cout<<"Enter what you actually typed: ";
    getline(cin, actualTyped);
cout<<"Broken keys: "<<findBrokenKeys(correctPhrase, actualTyped);
}
bool isString(char character, string line)
{
    for(int y=0;y<line.length();y++){
        if(line[y]==character){
            return true;
        }
    }
    return false;
}
string findBrokenKeys(string correctPhrase, string actualTyped)
{
    string brokenkeys, keys;
    for(int x = 0; x < correctPhrase.length(); x++){
        if(correctPhrase[x] != actualTyped[x] && !isString(correctPhrase[x], keys)){
            brokenkeys = brokenkeys + correctPhrase[x];
            keys = keys + correctPhrase[x];
        }
    }
    return brokenkeys;
}