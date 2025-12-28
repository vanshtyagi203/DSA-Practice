#include<bits/stdc++.h>
using namespace std;

int buySellStock(int arr[],int n){
    int minPrice=arr[0];
    int profit=0;

    for(int i=1;i<n;i++){
        int cost=arr[i]-minPrice;
        profit=max(profit,cost);
        minPrice=min(minPrice,arr[i]);
    }
    return profit;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int result=buySellStock(arr,n);
    cout<<result;
    return 0;
}