/* MOVE ALL ZEROS TO THE END OF THE ARRAY
  ARR[]={1,0,2,3,2,0,0,4,5,1}
  BECOMES
  ARR[]={1,2,3,2,4,5,1,0,0,0}
  BRUTE FORCE IS
1) WE WILL TAKE TEMP[] AND ADD ALL NON ZERO INTO IT
2)THEN PUT ALL ELEMENTS OF TEMP INTO ARR[]
3)ADD 0'S ON REMAINING PLACE IN ARRAY
TIME COM= O(N)+O(X)+O(N-X)==O(2N)
SPACE COM= O(N) space that will be taken to store by temp non zero element
*/
// #include<bits/stdc++.h>
// using namespace std;
// void moveZero(vector<int> &arr,int n)
// {
//    vector<int> temp;
//    for(int i=0;i<n;i++)
//    {
//      if(arr[i]!=0)
//      {
//         temp.push_back(arr[i]);
//      }
//    }
//    //now putting non zero into array from temp
//    for(int i=0;i<temp.size();i++)
//    {
//       arr[i]=temp[i];
//    }

//    //putting zero's at end that means value will be added into array after temp so we will start the loop from temp.size() to last index of array
//    for(int i=temp.size();i<n;i++)
//    {
//       arr[i]=0;
//    }
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     moveZero(arr,n);
//     cout<<"AFTER MOVING ZERO TO END:"<<endl;

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// }

/*OPTIMAL SOLUTION= WE WILL USE TWO POINTER APPROACH*/
#include<bits/stdc++.h>
using namespace std;
 void moveZero(int arr[],int n)
 {
     int j=-1;
     for(int i=0;i<n;i++)
     {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
     }//as soon as first 0 encounter j will point to that

     for(int i=j+1;i<n;i++) //as we have 0 in j so i will check after j ie j+1
     {
        if(arr[i]!=0) //as if after j, if arr[i] is not equal to 0 then as j=0 so swap will happen and 0 moves forward
        {
            swap(arr[i],arr[j]);
            j++;
        }
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
    moveZero(arr,n);
    cout<<"AFTER MOVING ZERO AT THE END:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
//TIME COMPLEXITY= at first we have found first 0 in array so lets suppose we move x and after that we initialise i=j+1 that means n-x
// therefore O(x)+O(n-x)==O(N) is TC  
//Space Com = O(1)