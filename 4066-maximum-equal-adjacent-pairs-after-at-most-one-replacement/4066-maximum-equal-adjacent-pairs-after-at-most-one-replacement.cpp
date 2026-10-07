class Solution {
public:
    int maxEqualAdjacentPairs(vector<int>& nums) {
        int n=nums.size();
        map<pair<int,int>,int>mpp;
        int SamePaircnt=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]) SamePaircnt++;
            else{
                int a=min(nums[i],nums[i+1]);
                 int b=max(nums[i],nums[i+1]);
                 mpp[{a,b}]++;
            }
        }
        int maxi=0;
        for(auto it:mpp) maxi=max(maxi,it.second);

        return SamePaircnt+maxi;
    }
};
// i was thinking Which x should I replace? Which y should I choose? How many occurrences of x are there?"
//but we think to do like just count the adjacent pairs as at the end we can only choose c and y from there and replace then so just why the fuck i was not able to think in that ways...