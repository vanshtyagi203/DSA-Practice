//Check if string is palindrome or not after converting all uppercase to lower and removing all non-alphanumeric characters.
//Alphanumeric characters include letters and numbers.
//Example = Ac3?e3c&a after removing non-alphanumeric becomes => Ac3e3ca

#include<bits/stdc++.h>
using namespace std;

bool palindrome(string &str){
     int i=0;
     int j=str.length()-1;

     while(i<j){
        if(!isalnum(str[i])){
            i++;
            continue;
        }
        if(!isalnum(str[j])){
            j--;
            continue;
        }

        if(tolower(str[i]) != tolower(str[j])){
            return false;
        }
        else{
            i++;
            j--;
        }
     }
     return true;
}

int main(){
     string str;
     getline(cin,str);

     bool result=palindrome(str);
     if(result==1){
        cout<<"String is Palindrome";
     }
     else{
        cout<<"String is not Palindrome";
     }
     
    return 0;
}