class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            for(int x:nums){
                sum+=(x+mid-1)/mid; // this one is ceil value.
            }
            if(sum<=threshold){
                ans=mid;
                high=mid-1;
            }
            else
            low=mid+1;
        }

        return ans;
    }
};