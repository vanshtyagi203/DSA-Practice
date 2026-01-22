/*Rotate String=After some left shifts if one string becomes equal to other then return true
  Input =>    s1=abcdef
              s2=bcdefa
  Output => True

  Input =>    s1=hello
              s2=lohelx
  Output =>   False
  explanation=>Even after all possible rotations of "hello", we cannot form "lohelx" due to the presence of an extra character 'x'            
   
  Brute force=Generate all possible left rotation of the original string and compare it with target string.
  */
 #include<bits/stdc++.h>
 using namespace std;
 bool rotateString(string &str,string &target){
    if(str.length()!=target.length()){
        return false;
    }

    for(int i=0;i<str.length();i++){
        rotate(str.begin(),str.begin()+1,str.end());
        if(str==target){
            return true;
        }
    }
    return false;
 }
 
 int main(){
    string str;
    getline(cin,str);
    string target;
    getline(cin,target);

    bool res=rotateString(str,target);
    if(res==true){
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
 }