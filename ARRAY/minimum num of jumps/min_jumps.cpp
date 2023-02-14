
#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        int current=0;
        int next_jmp_pos=0;
        int jumps=0;
        
        for (int i = 0; i < n-1; i++)
        {
            next_jmp_pos=max(next_jmp_pos,i+arr[i]); // here value of i is only compare so moves forward
            if(i==current){
                jumps++; //he jumps
                current=next_jmp_pos; //he jumped to that pos
            }
            if(current>=n-1){break;}
        }
        return current >= n-1 ? jumps : -1;
        }
        
};


//{ Driver Code Starts.

int main()
{

        int n,i;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    return 0;
}

// } Driver Code Ends