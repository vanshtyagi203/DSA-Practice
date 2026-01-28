/*
The candies in this universe come in N colours, numbered 1 to N.
You have N candies with you, the i-th candy having a colour Ai

You wonder what is the most frequent colour among your candies. In case there is a tie, you should print the smaller colour among all the most frequent colours.
Input => 3
         1 2 3
Output=> 1
Input => 5
         3 3 4 4 1
Output=> 3                  
*/
#include <bits/stdc++.h>
using namespace std;
int freqColor(int arr[],int n){
    
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    int maxFreq=0;
    int ansColor=INT_MAX;
    
    for(auto it:mpp){
        int color=it.first;
        int freq=it.second;
        if(freq>maxFreq){
            maxFreq=freq;
            ansColor=color;
        }
        else if(freq==maxFreq){
            ansColor=min(ansColor,color);
        }
    }
    return ansColor;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int res=freqColor(arr,n);
    cout<<res<<endl;

    return 0;
}