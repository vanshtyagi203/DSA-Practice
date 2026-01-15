/*Given a string S

String may contain letters, digits, spaces, and special characters

Replace every space ' ' with underscore '_'

Remove all special characters

Keep only alphanumeric characters and underscores

Do not change character order

Do not change letter case

Return the final string
*/

#include<bits/stdc++.h>
using namespace std;

 string replaceSpaces(string &str){
    for(int i=0;i<str.length();i++){
        if(str[i]==' '){
            str[i]='_';
        }
        else if(!isalnum(str[i])){
            str.erase(i,1);
            i--;   //when a character is erased index shifts to left
        }
    }
    return str;
 }

int main(){
    string str;
    getline(cin,str);
    
    string res=replaceSpaces(str);
    cout<<"String becomes = ";
    cout<<res<<endl;
    return 0;
}