/*
     *    
    ***   
   *****  
  ******* 
 *********
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

     //first pyramid pattern 
    for(int i=0;i<n;i++){
        
        for(int space=0;space <n-i-1;space++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        for(int space=0;space <n-i-1;space++){
            cout<<" ";
        }
        cout<<endl;
    }
        
     //now inverted pyramid
    for(int i=0;i<n;i++){    
       
        for(int space=0;space<i;space++){
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++){
            cout<<"*";
        }
        for(int space=0;space<i;space++){
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}