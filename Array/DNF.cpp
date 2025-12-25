// Sort an array of 0's 1's & 2's
//Dutch National Flag

#include<bits/stdc++.h>
using namespace std;

void dutchNationalflag(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){

        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}

int main(){
    int n;
    cout<<"Enter number of elements in array = ";
    cin>>n;

    int arr[n];
    cout<<"Enter Elements in array = ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    dutchNationalflag(arr,n);
    cout<<"Array after sorting"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
