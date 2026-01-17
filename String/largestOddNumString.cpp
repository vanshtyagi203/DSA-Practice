/*/* Largest Odd Number in String: return the largest odd number as a string, or "" if no odd number exists.

example=   input="52"
           output="5"
           
           input="4206"
           output="" There is no odd number in "4206"

           input="456238"
           output="45623"
*/
//Approach= Traverse from back and as soon as an odd number is encountered ,return the substring from i=0 to that index where odd number encountered

#include<bits/stdc++.h>
using namespace std;
 string largestOddNumStr(string &str){
       for(int i=str.length()-1;i>=0;i--){
          if( (str[i]-'0')%2 != 0){
            return str.substr(0,i+1);
          }
       }
       return "";
 }
int main(){
    string str;
    getline(cin,str);

    string res=largestOddNumStr(str);
    cout<<"Largest Odd Number in String = ";
    cout<<res;
    return 0;
}