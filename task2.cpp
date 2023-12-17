#include<iostream>
using namespace std;
string containSeven(int number[], int size);
main()
{
    int maxSize=100;
    int number[maxSize];
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
    
    for(int i=0;i<size;i++)
    {
        cout<<"Enter Element "<<i+1<<": ";
        cin>>number[i];
    }
     cout<<containSeven(number, size);
}
string containSeven(int number[], int size)
{
    for(int i=0;i<size;i++)
    {
        while(number[i]!=0)
        {
        if(number[i]%10 == 7)
        {
            return "Boom";
        }
        number[i]=number[i]/10;
        }
    }
    return "there is no 7 in the array";
}