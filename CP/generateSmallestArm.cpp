//You have to generate smallest armstrong number of k digit number

#include<bits/stdc++.h>
using namespace std;

 int generateSmallArms(int n){
    int a=pow(10,n-1);
    int b=pow(10,n)-1;

    for(int i=a;i<=b;i++){
        int temp=i;
        int sum=0;
        while(temp!=0){
            int x=temp%10;
            sum=sum+ (int)pow(x,n);
            temp=temp/10;
        }
        if(sum==i){
            return i;
        }
    }
    return -1;
 }
 
int main(){
    int k;
    cin>>k;

    int result=generateSmallArms(k);
    cout<<"Smallest Armstrong Number is = "<<result;
    return 0;
}