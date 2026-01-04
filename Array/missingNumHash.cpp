//arr[]={1,2,4,5}
//Missing number is 3


#include<bits/stdc++.h>
using namespace std;

int missingNum(int arr[],int n){
    unordered_map<int ,int> val;

    for(int i=0;i<n;i++){
        val[arr[i]]++;
    }

    for(int i=1;i<n+1;i++){
        if(val[i]==0){
            return i;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res=missingNum(arr,n);
    cout<<res<<endl;
    return 0;
}
//Better Approach not optimal