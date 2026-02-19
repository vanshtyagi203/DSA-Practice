/*
Buying Tickets
Chef wants to buy tickets to a sports game for K people (including himself).
The sports game has N total seats, numbered 1 to N. The i-th seat costs A[i] rupees However, several seats have already been bought, because Chef was late to the task. You are given a binary string 
S, where S[i]=1 if the i-th seat has already been bought and Si=0 if not buyed

Among the remaining seats, what is the minimum cost Chef has to pay to buy K seats?
It is not required that the seats be consecutive or any other property. It may be impossible to buy K seats, in which case print −1.

Input Format
=>The first line of input will contain a single integer T denoting the number of test cases.
=>Each test case consists of multiple lines of input
=>The first line contains 2 integers N and K the number of seats and the number of people.
=>The second line contains N integers - A1,...,An
=>The third line contains a binary string S.

Sample 1:
Input: 3
       4 3
       1 1 1 1
       0 0 0 0
Output : 3

Input : 4 3
        4 2 6 8
        1 1 0 0
Output: -1

Input : 4 3
        4 2 6 8
        0 1 0 0

Output: 18
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++){
          cin>>a[i];
      }
      string s;
      cin>>s;
      vector<int> v;
      for(int i=0;i<s.length();i++){
          if(s[i]=='0'){
              v.push_back(a[i]);
          }
      }
      if(v.size()<k){
          cout<<"-1"<<endl;
          continue;
      }
      sort(v.begin(),v.end());
      int sum=0;
      for(int i=0;i<k;i++){
          sum=sum+v[i];
      }
      cout<<sum<<endl;
  }
  
 return 0;
}