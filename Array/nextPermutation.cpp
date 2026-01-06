//arr[]={1,2,3,6,5,4}
//next permutation = {1,2,4,3,5,6}

#include<bits/stdc++.h>
using namespace std;

void nextPermutation(int arr[],int n){
    int pivot=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){
        reverse(arr,arr+n);
        return;
    }

    for(int i=n-1;i>pivot;i--){
        if(arr[i]>arr[pivot]){
            swap(arr[i],arr[pivot]);
            break;
        }
    }

    reverse(arr+pivot+1,arr+n);
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    nextPermutation(arr,n);

    cout<<"Next permutation is = ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}