/*You are given a string consisting of multiple words separated by single spaces.
Your task is to process each word independently and construct a new string by following these rules:
Reverse each word in the string.
Append the length of that word immediately after the reversed word.
Maintain the original order of words.
Separate the processed words using a single space.
Do not add any extra space at the beginning or at the end of the final string.*/
//ex= salesforce developer 
// output= ecrofselas10 repoleved9


#include<bits/stdc++.h>
using namespace std;
  string reverseWordswithCount(string &str){
    int count=0;
    string result="";//final answer string
    string word="";//stores current word

    for(int i=0;i<str.length();i++){
           if(str[i]!=' '){  //this block will store characters in word  and increases count
            word=word+str[i];
            count++;
           }
           else{  // as space encountered,first reverse the word then append count to word and store into result string
            reverse(word.begin(),word.end());
            result=result+word+to_string(count)+" ";//after this set count to 0 and word to empty as next word will get stored into it
            count=0;
            word="";
           }
    }
    if(count>0){  // this block is for last word ,as only if part will execute for last word.there will be no space encountered for last word so if count>0 then do this for last word 
        reverse(word.begin(),word.end());
        result=result+word+to_string(count);
    }
    return result;
  }
int main(){
    string str;
    getline(cin,str);

    string res=reverseWordswithCount( str);
    cout<<"String becomes = ";
    cout<<res<<endl;
    return 0;
}