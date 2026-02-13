/*
        *        *
        **      **
        ***    ***
        ****  ****
        **********
        ****  ****
        ***    ***
        **      **
        *        *
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=2*n-1;i++){
        //star
        int star=i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        //space
        int space=2*n-2*star;
        for(int k=1;k<=space;k++){
            cout<<" ";
        }

        //star
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}