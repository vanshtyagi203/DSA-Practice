
#include<bits/stdc++.h>
using namespace std;
 int largest_element(int arr[],int n)
 {
    int largest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    return largest;
 } 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   int result= largest_element(arr,n);
   cout<<"LARGEST ELEMENT:"<<result;
   
    return 0;
}