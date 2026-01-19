/*Longest Common Prefix
Input=> str=["flower","flow","flight"]
Output=> "fl"

Input=> str=["dog","racecar","car"]
Output=> "" There is no common Prefix among input string

 Optimal approach
 */

 #include<bits/stdc++.h>
 using namespace std;
 string longestCommonPrefix(vector<string> str){
    string ans="";
    sort(str.begin(),str.end());

    string strt=str[0]; //first string 
    string end=str[str.size()-1]; //last string

    int len=min(strt.length(),end.length()); //loop will run till the length of shortest string

    for(int i=0;i<len;i++){
        if( strt[i]==end[i] ){ // if char of first string is equal to char of last string then append into ans 
            ans=ans+strt[i];
        }
        else{
            break;
        }
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
    cout<<"Longest Common Prefix is  = ";
    cout<<res<<endl;
    return 0;
 }