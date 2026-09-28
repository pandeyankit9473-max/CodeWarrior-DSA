class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;

        while (nums.size() != 0) {
            vector<int> v;

            for (int i = 0; i < nums.size(); i++) {
                int x = nums[i];

                auto it = find(v.begin(), v.end(), x);

                if (it == v.end()) {
                    v.push_back(x);

                    auto it2 = find(nums.begin(), nums.end(), x);
                    nums.erase(it2);

                    i--; // because nums size changed
                }
            }

            sort(v.begin(), v.end());
            ans.insert(ans.end(), v.begin(), v.end());
        }

        return ans;
    }
};