//You are given two integers (n,m),find the prime in between and calculate sum of all primes

#include<bits/stdc++.h>
using namespace std;
 int generateSumPrime(int n,int m){
    int sum=0;
    for(int i=n;i<=m;i++){

        if(i<2)continue;//0 and 1 are not prime;
         int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            sum=sum+i;
        }
    }
    return sum;
 }
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;

    int result=generateSumPrime(n,m);
    cout<<"Sum is = "<<result;
    return 0;
}