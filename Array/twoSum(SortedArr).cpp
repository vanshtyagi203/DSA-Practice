//Two Sum when array is Sorted
//using Two pointer

#include<bits/stdc++.h>
using namespace std;
 pair<int,int> twoSum(int arr[],int n,int target){
    int i=0;
    int j=n-1;

    while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            return{i,j};
        }
        else if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
    }
    return{-1,-1};
 }
 
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements= ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target value= ";
    cin>>target;

    pair<int,int> res=twoSum(arr,n,target);
    cout<<res.first<<","<<res.second;
    return 0;
}