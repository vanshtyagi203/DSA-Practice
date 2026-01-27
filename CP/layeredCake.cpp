/*
 
Layered Cake
There are N options for the first cake layer (array A) and M options
for the second cake layer (array B).
A valid cake is formed by choosing one layer from A and one from B
such that the second layer size is strictly smaller than the first layer size.
Task: Count the number of valid (A[i], B[j]) combinations.

Input= 4 2 (size of n,m)
       5 2 6 1 (arr1)
       3 7     (arr2)

Output= 2

Input = 3 3
        3 3 3
        2 2 2
Output=  9        

*/


#include <bits/stdc++.h>
using namespace std;
int validCake(int n,int m,int arr1[],int arr2[]){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]>arr2[j]){
                count++;
            }
        }
    }
    return count;
}
int main() {
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    
    int res=validCake(n,m,arr1,arr2);
    cout<<res<<endl;

    return 0;
}