/*Rotate String=After some left shifts if one string becomes equal to other then return true
  Input =>    s1=abcdef
              s2=bcdefa
  Output => True

  Input =>    s1=hello
              s2=lohelx
  Output =>   False
  explanation=>Even after all possible rotations of "hello", we cannot form "lohelx" due to the presence of an extra character 'x'            
   
  Optimal Approach = We will concatenate main string with itself and then find whether goal string is present in main string as substring as
                     we know all rotation of a string is present in concatenated string as substring 
                     */

#include<bits/stdc++.h>
using namespace std;
 bool rotateString(string &str,string &goal){
    if(str.length()!=goal.length()){
        return false;
    }
     string ans=str+str;

     if(ans.find(goal) != string::npos){
        return true;
     }
     return false;
 }

int main(){
    string str;
    getline(cin,str);
    string goal;
    getline(cin,goal);

    bool res=rotateString(str,goal);
    if(res==true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

   return 0;
}