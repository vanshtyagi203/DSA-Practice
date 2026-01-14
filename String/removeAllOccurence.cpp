//Two strings str and part are given,remove all occurences of part from str
/*example = str="daabcbaabcbc"
           part="abc"
       OUTPUT= "dab"     
*/
#include<bits/stdc++.h>
using namespace std;

string removeOcc(string &str,string &part){

    while(str.length()>0 && str.find(part)<str.length()){
         str.erase( str.find(part), part.length());
    }
    return str;
}

int main(){
    string str;
    getline(cin,str);

    string part;
    getline(cin,part);

    string result=removeOcc(str,part);
    cout<<"After removing all occurences = ";
    cout<<result;
    return 0;
}