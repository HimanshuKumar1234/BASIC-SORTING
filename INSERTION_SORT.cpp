// Start from 2nd element (since 1st is already sorted ) and make it sit on the correct position( swap wile its get it's correct position)

// jabtak element apne pahle wal se chhota hai tabtak swap karo

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of elements in array :- ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements :- ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr[i]=x;
    }

    for(int i=1;i<n;i++)
    {
        int j =i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}


// 5 | 4  1  6  2
// STABLE
// TC => N^2        BEST CASE => N



// BUUBLE -> LAST       SELECTION -> FIRST     INSERTION -> BEECH ME