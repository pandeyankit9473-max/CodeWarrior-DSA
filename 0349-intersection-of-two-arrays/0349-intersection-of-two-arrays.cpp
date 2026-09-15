class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mpp;
        for(int x:nums1) mpp[x]++;
        vector<int>ans;
        for(int x: nums2){
            if(mpp.find(x)!=mpp.end()){
                ans.push_back(x);
                mpp.erase(x);
            }
        }
        return ans;
    }
};