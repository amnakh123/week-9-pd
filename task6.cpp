#include<iostream>
using namespace std;
int coloringTime(string cols[], int size);
main()
{
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    string cols[size];
    for(int i=0;i<size;i++){
        cout<<"Enter Element "<<i+1<<": ";
        cin>>cols[i];
    }
    cout<<"Time to color: "<<coloringTime(cols, size)<<" seconds";
}
int coloringTime(string cols[], int size)
{
    int colortime= 2;
    for(int x=1;x<size;x++){
        if(cols[x]!=cols[x-1]){
            colortime=colortime+1;
        }
        colortime=colortime+2;
    }
    return colortime;
}