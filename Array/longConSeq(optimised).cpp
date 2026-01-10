//Longest Consecutive Sequence Optimised
//Using Set 

#include<bits/stdc++.h>
using namespace std;
 
  int lonConSeq(int arr[],int n){
       int longest=0;
       unordered_set<int>st;

       for(int i=0;i<n;i++){ //Inserting elements into set(duplicates automatically removed)
        st.insert(arr[i]);
       }

       for(auto it:st){ //traversing element in set
             if( st.find(it-1) == st.end() ){   // Start counting only if it is the beginning of a sequence
                                                // (previous number does not exist in the set)
                int count=1;
                int num=it;

                while( st.find(num+1)!=st.end()){  // Count consecutive numbers

                    num=num+1;
                    count++;
                }
                longest=max(longest,count);
             }

       }
       return longest;
  }
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int res=lonConSeq(arr,n);
    cout<<res;
    return 0;
}