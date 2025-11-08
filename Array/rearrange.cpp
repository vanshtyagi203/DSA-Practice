//Rearrange the array on the basis on positive and negative number
//arr[]={3,1,-2,-5,2,-4}
//becomes
//arr[]={3,-2,1,-5,2,-4}

// #include<bits/stdc++.h>
// using namespace std;
// void rearrange(int arr[],int n)
// {
//     vector<int> pos;
//     vector<int> neg;
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]>0)
//         {
//             pos.push_back(arr[i]);
//         }
//         else{
//             neg.push_back(arr[i]);
//         }
//     }

//     for(int i=0;i<n;i++)
//     {
//         arr[2*i]=pos[i];
//         arr[2*i+1]=neg[i];
//     }
// }
// int  main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     rearrange(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

//==========================================================================
//optimal solution

#include<bits/stdc++.h>
using namespace std;
  
vector<int> rearrange(int arr[],int n)
{
   vector<int> ans(n,0);
   int pos=0;
   int neg=1;

   for(int i=0;i<n;i++)
   {
      if(arr[i]>0)
      {
        ans[pos]=arr[i];
        pos=pos+2;
      }
      else{
        ans[neg]=arr[i];
        neg=neg+2;
      }
   }
   return ans;
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
    vector<int> result=rearrange(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
