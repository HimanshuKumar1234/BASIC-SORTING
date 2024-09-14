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
    int vis[n];
    for(int i=0;i<n;i++)
    {
        vis[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        int mini = INT_MAX;
        int id = -1;
        for(int j=0;j<n;j++)
        {
            if(vis[j]==0 && mini>arr[j])
            {
                mini = arr[j];
                id = j;
            }
        }
        vis[id]=id;
    }
    for(int i=0;i<n;i++)
    {
        cout<<vis[i]<<"  ";
    }
}