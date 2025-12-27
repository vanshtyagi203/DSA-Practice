//For optimization we will be using the Kadane's Algo

#include<bits/stdc++.h>
using namespace std;

int maxSubArr(int arr[],int n){
    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxi=max(maxi,sum);

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int result=maxSubArr(arr,n);

    cout<<"Maximum Sub Array Sum is = "<<result;
    return 0;
}