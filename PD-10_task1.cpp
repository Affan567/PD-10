#include <iostream>
using namespace std;

bool checkarrangement(int n);
main()
{
    int num ;
    cout<<"Enter The length of the array: ";
    cin>>num;
    if(checkarrangement(num))
    {
        cout<<"Array is Sorted!";
    }
    else{
        cout<<"Array can't be sorted";
    }
    
}

bool checkarrangement(int n)
{
    int temp;

int arr[n];
    for(int z=0; z<n;z++)
    {
        cin>>arr[z];
    }

    for(int i=0; i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }

int x = 0;
if(arr[x] != arr[x+1])
{
    for(  ;x<n;x++)
    {
        
        cout<<arr[x]<<" ";
    }

    return true;
}
else{
    return false;
}

}