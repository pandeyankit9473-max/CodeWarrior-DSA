class Solution {
public:
    vector<vector<int>>result;

    void solve(int i, vector<int>& nums, vector<int>&temp){
        if(i>=nums.size()){ 
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        solve(i+1, nums,temp);
        temp.pop_back();
        solve(i+1, nums, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        solve(0,nums,temp);
        return result;
    }
};

// int n=nums.size();
//         int total=1<<n;
//         vector<vector<int>>ans;
//         for(int i=0;i<total;i++){
//             vector<int>subset;
//             for(int j=0;j<n;j++){
//                 if(i&(1<<j))
//                    subset.push_back(nums[j]);
//             }
//             ans.push_back(subset);
//         }
//         return ans;