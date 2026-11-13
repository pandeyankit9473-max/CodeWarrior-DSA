class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        int j = 0;
        bool inc = false;

        for (int i = 0; i < s1.length(); i++) {

            if (s1[i] != s2[i]) {

                if (!inc) {
                    ans.push_back({"", ""});
                    inc = true;
                }

                ans[j][0].push_back(s1[i]);
                ans[j][1].push_back(s2[i]);
            }
            else if (inc) {
                j++;
                inc = false;
            }
        }

        return ans;
    }
};