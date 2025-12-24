//BRUTE FORCE

// #include<bits/stdc++.h>
// using namespace std;
// pair<int,int> twoSum(int arr[],int n,int target)
// {  
    
    
//    for(int i=0;i<n;i++)
//    {
//     for(int j=0;j<n;j++)
//     {
//         if(i==j)
//         continue;

//         if(arr[i]+arr[j]==target)
//         {
//            return {i,j};
//         }
//     }
    
//    }
//    return {-1,-1};
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int target;
//     cin>>target;

//     pair<int,int> result=twoSum(arr,n,target);

//     if(result.first==-1)
//     {
//         cout<<"NOT FOUND"<<endl;
//     }
//     else{
//     cout<<result.first<<" "<<result.second<<endl;
//     }
//     return 0;
// }

//-----------------------------------------------------------------
//BETTER = USING HASHMAP
#include<bits/stdc++.h>
using namespace std;
pair<int,int> twoSum(int arr[],int n,int target)
{
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
       int req=target-arr[i];
       if(mpp.find(req)!=mpp.end()) //mpp.end() points at past the last index that means if mpp.req not equal to mpp.end that means it has our element 
       {
        return {mpp[req],i};
       }
       else{
        mpp[arr[i]]=i;
       }
    }
    return {-1,-1};
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
    int target;
    cin>>target;

    pair<int,int> result=twoSum(arr,n,target);

    if(result.first==-1)
    {
     cout<<"NOT FOUND"<<endl;
    }
    else{
        cout<<result.first<<"  "<<result.second<<endl;
    }
    return 0;
}