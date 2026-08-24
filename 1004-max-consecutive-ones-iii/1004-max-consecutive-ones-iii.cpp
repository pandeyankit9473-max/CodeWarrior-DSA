class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0, right=0, len=0, zerocnt=0, maxi=0;
        while(right<nums.size()){
            if(nums[right]==0) zerocnt++;
            while(zerocnt>k){
                if(nums[left]==0) zerocnt--;
                left++;
            }
            maxi=max(maxi, right-left+1);
            right++;
        }
        return maxi;
    }
};