/*Anagram Strings = Strings are anagram if by rearranging the letters of one string it becomes the other string,then they are anagram
 Input => s="anagram"
          t=nagaram
 Output => True
 
 Input => s="rat"
          t="car"
 Output => False
 
 Optimal approach = We used a map to store character frequencies of the first string.
                    While iterating over the second string, we decreased the frequency.
                    If the frequency of all characters becomes zero, the strings are anagrams */
                    

 #include<bits/stdc++.h>
 using namespace std;
 bool anagramStrings(string &s,string &t){
    if(s.length()!=t.length()){
        return false;
    }

    unordered_map<char,int> mpp;

    for(int i=0;i<s.length();i++){
         mpp[s[i]]++;
    }

    for(int i=0;i<t.length();i++){
        mpp[t[i]]--;
    }

    for(auto it:mpp){
        if(it.second!=0){
             return false;
        }
    }
    return true;
 }

 int main(){
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);

    bool res=anagramStrings(s,t);
    if(res==true){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
 }