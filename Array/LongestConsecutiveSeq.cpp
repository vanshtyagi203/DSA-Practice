#include<bits/stdc++.h>
using namespace std;
 
 int longestConSeq(int arr[],int n){
     //first sort the array
     sort(arr,arr+n);

     int longest=1;
     int count=0;
     int lastSmall=INT_MIN;

     for(int i=0;i<n;i++){

         if(arr[i]-1==lastSmall){
           // This condition checks if the current element continues the consecutive sequence.
           // Example: if arr[i] = 2 and lastSmall = 1, then the sequence continues.
           // Increase count and update lastSmall.
            count=count+1;
            lastSmall=arr[i];
         }
         else if(arr[i]!=lastSmall){
            //this condition verifies to make new sequence
            // for eg= arr[i]=100 and lastSmall=4 ,then make a new sequence by setting count=1 and lastSmall as arr[i]
            count=1;
            lastSmall=arr[i];
         }
         longest=max(count,longest);
     }
     return longest;
 }

int main(){
     int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   
   int res=longestConSeq(arr,n);
   cout<<res<<endl;

    return 0;
}