/*Anagram Strings = Strings are anagram if by rearranging the letters of one string it becomes the other string,then they are anagram
 Input => s="anagram"
          t=nagaram
 Output => True
 
 Input => s="rat"
          t="car"
 Output => False
 
 Brute Approach=>First we sort both the strings and then check whether they are equal or not 
 */
#include<bits/stdc++.h>
using namespace std;

bool anagramString(string &s,string &t){
    if(s.length()!=t.length()){
        return false;
    }

    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    if(s==t){
        return true;
    }
    return false;
}
int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);

    bool res=anagramString(s,t);
    if(res==true){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
return 0;
}