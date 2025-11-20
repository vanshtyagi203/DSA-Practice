//BRUTE FORCE IS SORT THEN PRINT SECOND LAST ELEMENT



//BETTER APPROACH=WHAT WE WILL DO IS FIRST WE WILL CALCULATE LARGEST THEN CHECK IF SLARGEST IS GREATER THAN EVERY OTHER ELEMENT BUT SMALLER OR NOT EQUAL TO LARGEST
 //NOTE= IF ARRAY HAS ANY NEGATIVE NUMBER EG(-4)SO WE WILL USE (INT_MIN)IN int second_largest=INT_MIN

// #include<bits/stdc++.h>
// using namespace std;
// int secondLargest(int arr[],int n)
// {
//     int largest=arr[0];
//      for(int i=0;i<n;i++)
//      {
//         if(arr[i]>largest)
//         {
//             largest=arr[i];
//         }
//      }

//      int second_largest=-1;
//      for(int i=0;i<n;i++)
//      {
//         if(arr[i]>second_largest && arr[i]!=largest)
//         {
//             second_largest=arr[i];
//         }
//      }
//      return second_largest;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//    int result=secondLargest(arr,n);
//    cout<<"SECOND LARGEST IS :"<<result;
//    return 0;
// }

//OPTIMIZED APPROACH=IN THIS FIRST WE SELECTED LARGEST AS ARR[0] AND SECONDLAR AS -1  THEN WE CHECK IF(ARR[I]>LARGEST) THEN SECONDLAR GOT VALUE OF LARGEST AND THAT LARGEST GOT VALUE OF ARR[I]BECOZ THAT IS GREATER THAN LARGEST

#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n)
{
    int largest=arr[0];
    int second_lar=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            second_lar=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>second_lar)
        {
            second_lar=arr[i];
        }
    }
    return second_lar;
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
    int result= secondLargest(arr,n);
    cout<<"SECOND LARGEST IS :"<<result;
    return 0;
}


