/* Given a string S and a T of length 5,
   Generate a string M where 'G' denotes a correct character at the same index and 'B' denotes an incorrect one.
   If the guess at the i-th index is correct, the i-th character of M is G
   If the guess at the i-th index is wrong, the i-th character of M is B

   Input =>   S=ABCDE
              T=EDCBA
   Output =>  BBGBB        
*/

#include<bits/stdc++.h>
using namespace std;
 string modifyWord(string &S,string &T){
    string ans="";
    for(int i=0;i<5;i++){
        if(S[i]!=T[i]){
            ans=ans+'B';
        }
        else{
            ans=ans+'G';
        }
    }
    return ans;
 }
int main(){
    string S,T;
    cin>>S>>T;

    string res=modifyWord(S,T);
    cout<<"Corrected String M becomes = ";
    cout<<res<<endl;
    return 0;
}