//find the number that appears once ,and others twice

//OPTIMIZED CODE
#include<bits/stdc++.h>
using namespace std;

int appearOnce(int arr[],int n){
    int Xor=0;
    for(int i=0;i<n;i++){
        Xor=Xor^arr[i];
    }
    return Xor;
}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res=appearOnce(arr,n);
    cout<<res;
    return 0;
}

//Better Code
// #include <bits/stdc++.h>
// using namespace std;

// int appearOnes(int arr[],int n){
//     unordered_map<int,int> mpp;
//     int res;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         if(it.second==1){
//             return it.first;
//         }
        
//     }
//     return -1;
// }

// int main() {
//    int n;
//    cin>>n;
   
//    int arr[n];
//    for(int i=0;i<n;i++)
//    {
//        cin>>arr[i];
//    }
//    cout<<endl;
   
//    int res=appearOnes(arr,n);
//    cout<<res<<endl;

//     return 0;
// }