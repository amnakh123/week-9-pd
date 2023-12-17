#include<iostream>
using namespace std;
bool areAllElementsIdentical(string arr[], int size);
main()
{
    
    
    int size;
    cout<<"Enter the size of Array: ";
    cin>>size;
       string slotMachineOutcome[size];
   
    for(int i=0;i<size;i++){
      cout<<"Enter Element "<<i+1<<": ";
        cin>>slotMachineOutcome[i];
          cout<< areAllElementsIdentical(slotMachineOutcome, size);
    }
}
bool areAllElementsIdentical(string arr[], int size)
{
    string Element=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]!=Element){
            return false;
        }
    }
    return true;
}