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

    cout<<arr[n/2];
}