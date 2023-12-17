#include<iostream>
using namespace std;
string longest7SegmentWord(string word[], int n);
bool IsWordValid(string wordvalid);
main()
{
    int n;
    cout<<"Enter the number of words: ";
    cin>>n;
    string word[n];
            cout<<"Enter the words, one by one:"<<endl;
    for(int i=0; i<n; i++){
        
        cin>>word[i];
    }
    
   cout<<"Longest 7-segment word: "<<longest7SegmentWord(word, n);
    
}   
bool IsWordValid(string wordvalid)
{
    for(int x=0;x<wordvalid.length();x++){
    char letter =wordvalid[x];
    if(letter=='k' ||letter=='m' ||letter=='v' ||letter=='w' ||letter=='x'){
        return false;
    }
    }
    return true;
}
string longest7SegmentWord(string word[], int n)
{
    string longWord;
    for(int y=0;y<n;y++){
        if( IsWordValid(word[y]) && word[y].length() > longWord.length()){
            longWord=word[y];
        }
    }
    return longWord;
}