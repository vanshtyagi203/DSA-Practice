//Brute Force is by using SET as it stores only unique elements
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {   
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     set<int> st;
//     for(int i=0;i<n;i++)
//     {
//         st.insert(arr[i]); //O(N Log N )
//     }

//     int index=0;
//     for(auto it:st)
//     {
//         arr[index]=it;
//         index++; // O(N)
//     }

//     for(int i=0;i<index;i++)
//     {
//         cout<<arr[i];
//     }
   
//     return 0;
// } //this uses (N LOG N+ N) TC and S C as O(N) as suppose all elements in array are unique



// OPTIMAL SOLUTION =BY USING TWO POINTER APPROACH

#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(int arr[],int n)
{
  int i=0;//as first index will be unique element
  for(int j=1;j<n;j++) //j=1 becoz at first i is there and which is unique
  {
     if(arr[i]!=arr[j])
     {
        arr[i+1]=arr[j];
        i++;
     }
  }
  return i+1;
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
   int result= removeDuplicate(arr,n);
  cout<<"AFTER REMOVIGN:"<<endl;
  for(int i=0;i<result;i++)
  {
    cout<<arr[i]<<" ";
  }


    return 0;
}
// tc is O(N) and SC O(1)