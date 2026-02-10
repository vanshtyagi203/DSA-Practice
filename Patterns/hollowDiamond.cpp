/*
        **********
        ****  ****
        ***    ***
        **      **
        *        *
        *        *
        **      **
        ***    ***
        ****  ****
        **********
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
          //upper portion
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=(n-i+1);j++){
            cout<<"*";
        }
        //space
        for(int k=1;k<=(2*i-2);k++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=(n-i+1);j++){
            cout<<"*";
        }
        
        cout<<endl;
    }

         //lower portion
    for(int i=1;i<=n;i++){
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }

        //space
        for(int k=1;k<=(2*n-i*2);k++){
            cout<<" ";
        }
        //star
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}