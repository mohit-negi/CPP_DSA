//This is level 2
//Inserting an element to an index in an array
#include<iostream>

using namespace std;

void insert(int num[],int size,int at,int key)
{
    size+=1;
    for(int i{size};i>size-at;i--)
    {
        num[i] = num[i-1];
    }
    num[at] = key;
    for(int i{};i<size;i++)
    {
        cout<<num[i]<<'\t';
    }
}
int main()
{
    int num[] {1,2,3,4,6,7,8};
    int at{4},key{5};
    int size{sizeof(num)/sizeof(num[0])};
    //at 4 i want to insert an element in the array
    insert(num,size,at,key);
    
    return 0;
}