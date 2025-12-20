#include<bits/stdc++.h>
using namespace std;

int maxOnes(int arr[],int n){
    int count=0;
    int maxi=0;
    
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;

    int result=maxOnes(arr,n);
    
    cout<<result<<endl;

    return 0;
}