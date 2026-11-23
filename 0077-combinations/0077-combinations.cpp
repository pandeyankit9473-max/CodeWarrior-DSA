class Solution {
public:
    vector<vector<int>> ans;

    void solve(int start, int n, int k, vector<int>& comb) {

        if (comb.size() == k) {
            ans.push_back(comb);
            return;
        }

        for (int i = start; i <= n; i++) {

            comb.push_back(i);

            solve(i + 1, n, k, comb);

            comb.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        vector<int> comb;

        solve(1, n, k, comb);

        return ans;
    }
};