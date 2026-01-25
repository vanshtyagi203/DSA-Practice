/*Reverse Word
 Input= str="the sky is blue"
 Output= "blue is sky the"
 
 Input = str="  hello world  "
 Output=    world hello (reversed string should not contain leading or trailing spaces)*/

 #include<bits/stdc++.h>
 using namespace std;
 string reverseWord(string &str){
    string ans="";
    reverse(str.begin(),str.end());
    
    for(int i=0;i<str.length();i++){
        string word="";
        while(i<str.length() && str[i]!=' '){
              word=word+str[i];
              i++;
        }

        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans=ans+" "+word;
        }
    }
    return ans.substr(1);
 }

 int main(){
    string str;
    getline(cin,str);

    string res=reverseWord(str);
    cout<<"After reversing the words = ";
    cout<<res<<endl;
    return 0;
 }