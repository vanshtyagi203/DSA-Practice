/*
Remove Outermost Parentheses
You are given a valid parentheses string s
A valid parentheses string is composed of '(' and ')' that are properly balanced.
A valid parentheses string is called primitive if it cannot be split into two smaller valid parentheses strings.
Your task is to remove the outermost parentheses from every primitive part of s
 print the final result.
 DECOMPOSITION=It means for every opening parentheses there is a closing parentheses
 Example=> string =(()())(())
            Decompositions are (()()) & (())*/
#include<bits/stdc++.h>
using namespace std;
string removeOuterPar(string &str){
    int count=0;
    string result="";
    for(int i=0;i<str.length();i++){
        
        if(str[i]==')'){
            count--;
        }
        if(count!=0){
            result=result+str[i];
        }
        if(str[i]=='('){
            count++;
        }
    }
    return result;
}
int main(){
    string str;
    getline(cin,str);

    string res=removeOuterPar(str);
    cout<<"String becomes = ";
    cout<<res<<endl;
    return 0;
}