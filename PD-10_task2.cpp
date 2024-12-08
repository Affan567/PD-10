#include <iostream>
using namespace std;

int totalrotations(int n);
main()
{
    int num;
    cout<<"Enter length of the array: ";
    cin>>num;
    int rotation = totalrotations(num);
    cout<<"\nTotal rotations are: "<<rotation;

}

int totalrotations(int n)
{
    string arr[n];
    cout<<"Enter Elements of the Array: ";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
    int sum = 90;
    if(arr[0] == "right")
    {
    for(int x=0; x<n-1;x++)
    {
        if(arr[0] == arr[x+1] )
        {
           sum = sum + 90; 
        }
        else{
            sum-=90;
        }
    }
    cout<<sum;
    }
    
    if(arr[0] == "left")
    {
    for(int x=0; x<n-1;x++)
    {
        if(arr[0] == arr[x+1] )
        {
           sum = sum + 90; 
        }
        else{
            sum-=90;
        }
    }
    cout<<sum;
    }

    int rotations = sum / 360;
    return rotations;
    
}