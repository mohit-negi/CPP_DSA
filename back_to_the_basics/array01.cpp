//Back to the basics is not the back to the basics it
//is the section which i had less practice on 

//originally 1st problem should've been about declaring an array 
//skipping past that ,what we have is Traversal

#include<iostream>

using namespace std;

int main()
{
    int arr[] {1,2,3,4,5,6,7};
    int size{sizeof(arr)/sizeof(arr[0])};
    for(int i{};i<size;i++)
    {
        cout<<arr[i]<<'\t'; //traversing and printing it
    }
    for(int i{};i<size;i++)
    {
        cout<<arr[i]+2<<'\t';//traversing and performing operation
    }
    
    return 0;
}