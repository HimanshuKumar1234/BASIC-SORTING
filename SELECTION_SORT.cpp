//  Select minimum element and swap it with first element of array

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

    for(int i=0;i<n;i++)
    {
        int mini = INT_MAX;
        int id = -1;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<mini)
            {
                mini = arr[j];
                id = j;
            }
        }
        swap(arr[i],arr[id]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}

// STEPS
// find min from unsorted array and swap it wih the first element
// TC =>    N*(N-1)/2 