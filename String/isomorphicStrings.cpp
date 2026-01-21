/*Isomorphic Strings=Two strings s and t are isomorphic if the characters in s can be replaced to get t.
  ex= Input: s = "egg", t = "add"
      Output: true

      Input: s = "foo", t = "bar"
      Output: false
      The strings s and t can not be made identical as 'o' needs to be mapped to both 'a' and 'r'.
*/

#include<bits/stdc++.h>
using namespace std;

bool isomorphicStrings(string &str1,string &str2){
    unordered_map<char,char> mpp1;
    unordered_map<char,char> mpp2;

   if(str1.length()!=str2.length()){
    return false;
   }

   for(int i=0;i<str1.length();i++){
         char a=str1[i];
         char b=str2[i];

         if(mpp1.count(a) && mpp1[a]!=b){
            return false;
         }
         else{
            mpp1[a]=b;
         }

         if(mpp2.count(b) && mpp2[b]!=a){
            return false;
         }
         else{
            mpp2[b]=a;
         }
   }
   return true;
}

int main(){
    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);

    bool res=isomorphicStrings(str1,str2);
    if(res==true){
        cout<<"Strings are isomorphic"<<endl;
    }
    else{
        cout<<"Strings are not isomorphic"<<endl;
    }
return 0;
}