class Solution {
public:

    unordered_map<int,int>mpp;

    bool isValid(vector<int>&nums,int r){
        int c=nums[r];
        for(auto [ele,freq] : mpp){
            if(mpp.count(c+ele)) return false;
            int other=c-ele;
            if(other>0 && mpp.count(other)){
                // If ele == other, we need TWO occurrences
                // because the indices must be distinct
                if(ele!=other || freq>1) return false;
            }
        }
        return true;
    }

    int maxSubarray(vector<int>& nums) {
        int longest=0;
        int n=nums.size();
        int l=0,r=0;
        while(r<n){
            if(isValid(nums,r)){
                mpp[nums[r]]++;
                r++;
            }else{
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0){
                    mpp.erase(nums[l]);
                }
                 l++;
            }
            longest=max(longest,r-l);
        }
        return longest;
    }
    
};