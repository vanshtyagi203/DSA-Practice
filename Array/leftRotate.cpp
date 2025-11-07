/*LEFT ROTATE THE ARRAY BY ONE PLACE
  IF ARR[]={1,2,3,4,5}
   LEFT ROTATE BY ONE PLACE THEN ARRAY BECOMES
    ARR[]={2,3,4,5,1}
    */

#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n)
{
   int temp=arr[0];
   for(int i=1;i<n;i++)
   {
    arr[i-1]=arr[i];
   }
   arr[n-1]=temp;
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
    leftRotate(arr,n);
    cout<<"ARRAY AFTER LEFT ROTATION BY ONE PLACE:"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
