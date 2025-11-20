#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n)
{
    int k=0;
    int j=n-1;
    int temp;
    for(int i=0;i<n/2;i++)
    {
       
       temp=arr[k];
        arr[k]=arr[j];
        arr[j]=temp;
        k++;
        j--;
    }
    
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

    reverseArray(arr,n);
    cout<<"ARRAY AFTER REVERSE:"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}