#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of greed array :- ";
    cin>>n;
    vector<int>greed;
    cout<<"Enter greed array :- ";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        greed.push_back(x);
    }
    int m;
    cout<<"Enter size of size array :- ";
    cin>>m;
    vector<int>size;
    cout<<"Enter size array :- ";
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        size.push_back(x);
    }
    sort(greed.begin(),greed.end());
    sort(size.begin(),size.end());
    int count =0;
    int i = 0;
    int j = 0;
    while(i<n && j<m)
    {
        if(greed[i]<=size[j])
        {
            count++;
            i++;
        }
        j++;
    }
    cout<<count;
}