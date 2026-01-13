#include<bits/stdc++.h>
using namespace std;

int palindromeStr(char name[],int n)
{
   int s=0;
   int e=n-1;
   
   while(s<=e){
     if(  tolower(name[s]) != tolower(name[e]) ){
        return 0;
     }
     else{
        s++;
        e--;
      
     }
   }
  return 1;


}

int main()
{
    char name[20];
    cout<<"Enter your String = "<<endl;
    cin>>name;

    int n=strlen(name);

   int result= palindromeStr(name,n);
    
   if(result==1){
    cout<<"String is Palindrome!!"<<endl;
   }
   else{
    cout<<"String is not Palindrome!!"<<endl;
   }
    return 0;
}