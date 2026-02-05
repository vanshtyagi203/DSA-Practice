/*  
      *********
       ******* 
        *****  
         ***   
          * 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int space=0;space <i;space++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int space =0;space<i;space++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}