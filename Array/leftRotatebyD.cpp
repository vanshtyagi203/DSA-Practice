// //LEFT ROTATION OF ARRAY BY D PLACES//
// /*IF ARRAY IS 
//     ARR[]={1,2,3,4,5,6}
//     IF D=2 THEN ROTATION 
//     ARR[]={3,4,5,6,1,2}*/

// #include<bits/stdc++.h>
// using namespace std;    
 
// void rotateD(vector<int> &arr,int n,int d)
// {   
//     d=d%n;// if d and n are same or d>n then without d=d%n will behave weird or can go out of logic or overflow..
//     vector<int> temp(d);
//     //putting into temp
//     for (int i=0;i<d;i++)
//     {
//         temp[i]=arr[i];  //O(d)
//     }

//     for(int i=d;i<n;i++)
//     {
//         arr[i-d]=arr[i];  //O(n-d)
//     }
//     //putting D elements again in array
//     for(int i=n-d;i<n;i++)
//     {
//         arr[i]=temp[i-(n-d)];// int i=n-d becomes i=7-2=5 ie temp[5-(7-2)]==0 then i++ gives temp[1] and temp[2]these indexe values will be added into the rotated array by arr[i]=temp[i-(n-d)]
//     } //O(d)
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int d;
//     cin>>d;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     rotateD(arr,n,d);
//     cout<<"AFTER LEFT ROTATION OF ARRAY BY D PLACE:"<<endl;

//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }//this was the brute approach which has TC=O(n+d) and SC=O(d) becoz using temp to store d no of elements


// OPTIMIZED APPROACH=
/*  ARR[]={1,2,3,4,5,6,7} D=3
     ROTATED={4,5,6,7,1,2,3}
     IF WE OBSERVE FIRST REVERSE THE ELEMENTS UPTO D IS 
            3,2,1
            THEN REVERSE REST IE
            7,6,5,4
           AFTER TWO REVERSES ARRAY BECOMES
           {3,2,1,7,6,5,4}
           IF WE REVERSE WHOLE ARRAY AGAIN THEN
           {4,5,6,7,1,2,3}
           REVERSE(A,A+D)   UPTO D
           REVERSE(A+D,A+N) AFTER D TO LAST
           REVERSE(A,A+N)   COMPLETE
           */
         
#include<bits/stdc++.h>
using namespace std;
 void leftRotate(int arr[],int n,int d)
 {
    reverse(arr,arr+d); //arr points at first element and arr+d points at d but take value prior to it
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
 }
int main()
{
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    leftRotate(arr,n,d);
    cout<<"AFTER ROTATE:"<<endl;
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}