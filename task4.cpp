#include<iostream>
using namespace std;
void evenOddTransform(int arr[], int size, int n);
main()
{
    int size, n;
    cout<<"Enter the size of Array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;++i){
    cout<<"Enter Element "<<i+1<<": ";
    cin>>arr[i];
    }
    cout<<"Enter number of times even-odd transformation need to be done: ";
    cin>>n;
    evenOddTransform(arr, size, n);
  
}
void evenOddTransform(int arr[], int size, int n)
{
    for(int x=0;x<n;++x){
        for(int y=0;y<size;++y){
            if(arr[y]%2==0){
                arr[y]=arr[y]-2;
            }
            else if(arr[y]%2!=0){
                arr[y]=arr[y]+2;
            }
        }
    }
      cout<<"[";
    for(int i=0;i<size;++i)
    {
        if (i==size-1)
        {
            cout<<arr[i];
        }
        else{

        cout<<arr[i]<<", ";
        
    }
    
}
cout<<"]";
}