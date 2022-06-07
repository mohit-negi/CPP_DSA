//Shifting to the right side of the array
#include<iostream>

using namespace std;

int main()
{
    int arr[] {1,2,3,4,5,6};
    int size{sizeof(arr)/sizeof(arr[0])};
    int n{2};
    
    for(int i{};i<n;i++)
    {
        int temp = arr[size];   //temporarily storing the last element
        for(int j{size-1};j>0;j-0)  //shifting the element to 1 position
        {
            arr[j] = arr[j-1];
        }
        arr[j] = temp;  //assigning the stored element to first 
                        //element hence completing the first shift 
    }

    return 0;
}