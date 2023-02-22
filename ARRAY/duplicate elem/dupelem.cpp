#include<bits/stdc++.h>

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
    //   int r,flag=0;
    //   int n=nums.size();
    //    for(int i = 0;i < n-1;i++) {
    //        r=nums[i];
    //        for(int j=i+1;j<n;j++){
               
    //            if(r==nums[j]){
    //                flag=1;
    //                break;
    //            }
    //            else{
    //                continue;
    //            }
    //        }
    //        if(flag==1){
    //            break;
    //        }
    //    }
        int r;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size()-1;i++) {
            if(nums[i]==nums[i+1]){
                r=nums[i];
                break;
            }
        }

       return r;
    }
};

int main(){
    vector <int> vect;

}