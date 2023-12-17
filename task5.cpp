#include<iostream>
using namespace std;
int commonCharaters(string no1, string no2);
main()
{
    string no1, no2;
    cout<<"Enter the first string: ";
    cin>>no1;
    cout<<"Enter the second string: ";
    cin>>no2;
    cout<<"Number of common characters: "<<commonCharaters(no1,  no2);
}
int commonCharaters(string no1, string no2)
{
    int count=0;
    for(int i=0;no1[i]!='\0';i++){
        for(int y=0;no2[y]!='\0';y++){
            if(no1[i]==no2[y]){
                count++;
                no2.erase(y, y);
                break;
            }
        }
    }
    return count;
}