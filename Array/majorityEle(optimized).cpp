//Majority element > n/2 
//Moore's Voting Algo

#include<bits/stdc++.h>
using namespace std;

int majElement(int arr[],int n){
    int count=0;
    int element;
    for(int i=0;i<n;i++){   //this is phase 1 of code where it finds a possible majority element

        if(count==0){
            count=1;
            element=arr[i];
        }
        else if(element==arr[i]){ 
           count++;              //if next element in array is same as previous one,then increase count.
        }
        else{
            count--;             //if next element in array is not same to previous one,then decrease count.
        }
    }

    int cnt=0;
    for(int i=0;i<n;i++){       //this is phase 2 of code where it verifies whether element is actually a majority
        if(element==arr[i]){
            cnt++;
        }
      }

      if(cnt > (n/2) ){
        return element;
      }
      else {
        return -1;
      }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res=majElement(arr,n);
    cout<<"Majority element greater than n/2 is = ";
    cout<<res;

    return 0;
}
