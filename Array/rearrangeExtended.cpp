#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int>& arr,int n)
{
     vector<int> pos,neg;

     for(int i=0;i<n;i++)
     {
        if(arr[i]>0)
        {
            pos.push_back(arr[i]);
        }
        else{
            neg.push_back(arr[i]);
        }
     }

     //now we will check which one is greater
     if(pos.size()>neg.size())
     {
        for(int i=0;i<neg.size();i++) //i<neg.size() becoz we want to run loop till equal number of both pos and neg
        {
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }

        //now remaining elements 
        int index=neg.size()*2;//becoz neg*2 will have element total which are equal and pushed into rearranged format
        for(int i=neg.size();i<pos.size();i++)
        {
            arr[index]=pos[i];
            index++;
        }
     }
     else
     {
        //when neg are more than positive elements
        for(int i=0;i<pos.size();i++)
        {
            arr[i*2]=pos[i];
            arr[i*2+1]=neg[i];
        }

        int index=pos.size()*2;
        for(int i=pos.size();i<neg.size();i++)
        {
            arr[index]=neg[i];
            index++;
        }
     }
     return arr;

}
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> result=rearrange(arr,n);
    for(auto it:result)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;

}