/*Longest Common Prefix
Input=> str=["flower","flow","flight"]
Output=> "fl"

Input=> str=["dog","racecar","car"]
Output=> "" There is no common Prefix among input string

 Brute force approach
 */

 #include<bits/stdc++.h>
 using namespace std;

 string longestCommonPrefix(vector<string>str){
       string ans="";
       for(int i=0;i<str[0].length();i++){
        for(int j=0;j<str.size()-1;j++){
            if(str[j][i] != str[j+1][i]){
                return ans;
            }
        }
        ans=ans+str[0][i];
       }
       return ans;
 }
 int main(){
      int n;
      cin>>n;
      vector<string> str(n);
      for(int i=0;i<n;i++){
        cin>>str[i];
      }

      string res=longestCommonPrefix(str);
      cout<<"Longest Common Prefix is = ";
      cout<<res<<endl;
      return 0;
 }