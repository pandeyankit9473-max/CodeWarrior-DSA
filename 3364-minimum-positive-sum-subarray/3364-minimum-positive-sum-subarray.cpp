
class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int ans=INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int right=i; right<n;right++){
                
                sum+=nums[right];
                int len=right-i+1;
                if(len>=l && len<=r&& sum>0) ans=min(ans,sum);
                else if(len>r) break;
            }
        }
        

        return ans == INT_MAX ? -1 : ans;
    }
};

// vector<int> prefix(n + 1, 0);

//         for(int i = 0; i < n; i++) {
//             prefix[i + 1] = prefix[i] + nums[i];
//         }

//         int ans = INT_MAX;

//         for(int i = 0; i < n; i++) {

//             for(int len = l; len <= r; len++) {

//                 if(i + len <= n) {
//  //<=n because prefix idx has 0 to n....
 
//                     int sum = prefix[i + len] - prefix[i];

//                     if(sum > 0) {
//                         ans = min(ans, sum);
//                     }
//                 }
//             }
//         }