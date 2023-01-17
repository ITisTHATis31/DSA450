// //{ Driver Code Starts
// #include<bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// class Solution{
//     public:
//     // arr: input array
//     // n: size of array
//     //Function to find the sum of contiguous subarray with maximum sum.
//     long long maxSubarraySum(int arr[], int n){
        
//         // Your code here
//         int max=INT_MIN;
//         for(int i=0;i<n;i++){
//         int sum=0;
//             for(int j=i;j<n-i;j++){
//                 // if(i==j){
//                 // sum+=arr[j];
//                 // }else{
//                     sum=sum+arr[j];
//                 // }
//                 if(sum>max){
//                     max=sum;
//                 }else{
//                     continue;
//                 }
//             }
//         }
//         return max;
//     }
// };

// //{ Driver Code Starts.

// int main()
// {

//         int n;
//         cin>>n; //input size of array
        
//         int a[n];
        
//         for(int i=0;i<n;i++)
//             cin>>a[i]; //inputting elements of array
            
//         Solution ob;
        
//         cout << ob.maxSubarraySum(a, n) << endl;
//     }

// C++ program to print largest contiguous array sum

#include<bits/stdc++.h>
using namespace std;

void maxSubArraySum(int a[], int n)
{
    int max_so_far=INT_MIN;
    int sum=0;
    int start=0,end=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+a[i]; //.......STAGE 1 JUST ADD IT TO SUM
        
        if(max_so_far<sum){    //EVEN THOUGH ITS NEGATIVE , IF ITS A GREATER NEGATIVE THEN UPDATE IT
           max_so_far=sum; //...........STAGE....claculating max sum sub array
           end=i;
        }

        if(sum<0){
            sum=0;// WHY TO CARRY THE PAST VALUE WHICH ARE NEGATIVE JST DROP IT AND BEGIN A NEW START.
            start=start+i;
        }
    }
    cout<<"sum is"<<max_so_far<<endl;
    cout<<"start"<<start<<endl;
    cout<<"end"<<end<<endl;

    
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = { -2, 1, -3, 4, -1, 2, 1,-5,4 };
	int n = sizeof(a) / sizeof(a[0]);
	maxSubArraySum(a, n);
	return 0;
}
