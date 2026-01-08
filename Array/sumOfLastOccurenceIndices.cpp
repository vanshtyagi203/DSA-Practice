/*You are given:

An integer array arr of size n

Another integer array challenge of size k

For each element present in the challenge array, find its last occurrence index in the array arr (0-based indexing).

Finally, return the sum of all these last occurrence indices.

If an element from challenge appears multiple times in arr, only the last occurrence index should be considered.*/

#include <bits/stdc++.h>
using namespace std;
 int sumOfIndex(int arr[],int challenge[],int n,int k){
     unordered_map<int,int> ress;
     int sum=0;
     for(int i=0;i<k;i++){
         ress[challenge[i]]=0;
     }
     for(int i=n-1;i>=0;i--){
          if( ress.find(arr[i]) !=ress.end() ){
              if(ress[arr[i]]==0){
                  sum=sum+i;
                  ress[arr[i]]=1;
              }
          }
          }
          return sum;
     }
     
int main() {
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    int challenge[k];
    
    for(int j=0;j<k;j++){
        cin>>challenge[j];
    }
    
    int res=sumOfIndex(arr,challenge,n,k);
    cout<<res;

    return 0;
}