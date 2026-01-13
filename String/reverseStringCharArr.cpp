#include<bits/stdc++.h>
using namespace std;

void reverseStr(char name[],int n)
{
   int s=0;
   int e=n-1;

   while(s<=e)
   {
    swap(name[s++],name[e--]);
   }
}
int main()
{   

    char name[100];
    cout<<"Enter your string = ";
    cin>>name;
    
    int n=strlen(name);
    reverseStr(name,n);

    cout<<"Reversed String is = "<<name<<endl;

    return 0;
}