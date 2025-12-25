#include<bits/stdc++.h>
using namespace std;
int maxx_ele(int arr[],int n)
{
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it:mpp)
    {
        if(it.second>n/2)
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int result=maxx_ele(arr,n);

    cout<<"MAXIMUM ELEMENT IS= "<<result<<endl;
    return 0;
}