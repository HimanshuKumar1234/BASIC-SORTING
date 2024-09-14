// Left wala bada hai to swap karo => Ultimately you will find greatest in last at each turn

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
    for(int i=0;i<n-1;i++)
    {
        bool flag = false;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1]){
                flag=true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==false)break;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}

// Observation
/*
    1. In each pass nth max element goes to the right position
    2. For n elements it rewuires atlesat n-1 passes to sort


    STABLE SWAP
    TC => N*(N-1)/2    BEST CASE => N
*/