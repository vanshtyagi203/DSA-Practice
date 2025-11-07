#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,num,k=-1;
    cin>>n>>num;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
       if(arr[i]==num)
       {
       k=i;
       break;
       }
    }
    if(k==-1)
    cout<<"Elements not found";
    else
    {
        cout<<"Element found at index:"<<k;
    }
    return 0;

}