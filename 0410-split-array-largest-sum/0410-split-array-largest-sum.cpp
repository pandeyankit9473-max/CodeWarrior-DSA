class Solution {
public:
   int countSubarray(vector<int>&nums , int maxsum){
    int cnt=1;
    int sum=0;
    for(int i=0;i<nums.size();i++){
        if(sum+nums[i]<=maxsum){
            sum+=nums[i];

        }
        else{
            cnt++;
            sum=nums[i];
        }
    }
    return cnt;
   }


    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid=(low+high)/2;
            if(countSubarray(nums , mid)<=k){
                high=mid-1;
            }
            else 
            low=mid+1;
        }



         return low;  
    }

};
 // this one is brute force just go through it ...
// class Solution {
// public:

//     int solve(vector<int>& nums, int index, int k) {
        
//         if(k==1){
//             int sum=0;
//             for(int i=index;i<nums.size();i++){
//                 sum+=nums[i];
//             }
//             return sum;
//         }

//         int sum=0;
//         int ans=INT_MAX;

//         for(int i=index;i<=nums.size()-k;i++){
//             sum+=nums[i];

//             int next=solve(nums,i+1,k-1);

//             ans=min(ans,max(sum,next));
//         }

//         return ans;
//     }

//     int splitArray(vector<int>& nums, int k) {
//         return solve(nums,0,k);
//     }
// };