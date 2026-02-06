/*
  1
  0 1
  1 0 1
  0 1 0 1
  1 0 1 0 1
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
   
    for(int i=1;i<=n;i++){
         int temp=1;
        if(i%2==0){
            temp=0;
        }
        else{
            temp=1;
        }
        for(int j=1;j<=i;j++){
            cout<<temp;
            temp=1-temp;
        }
        cout<<endl;
    }
    return 0;
}