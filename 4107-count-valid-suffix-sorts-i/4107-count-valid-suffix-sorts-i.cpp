
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countSuffix(vector<int>& v1, vector<int>& v2) {

        int n = v1.size();
        int ans = 0;

        // Step 1: Check karo ki starting ke i elements equal hain ya nahi
        vector<int> eq(n + 1, 1);

        for (int i = 0; i < n; i++) {
            eq[i + 1] = eq[i] && (v1[i] == v2[i]);
        }

        // Step 2: Suffix ki frequency difference store karne ke liye map
        unordered_map<int, int> m;

        // Step 3: Right se left traverse karo
        for (int i = n - 1; i >= 0; i--) {

            // Target ka suffix descending order mein nahi hai
            // Toh aage check karne ki zarurat nahi
            if (i < n - 1 && v2[i] < v2[i + 1]) {
                break;
            }

            // v1 ka current element add karo
            m[v1[i]]++;

            // v2 ka current element subtract karo
            m[v2[i]]--;

            // Jiski frequency difference zero ho gayi,
            // usko map se remove kar do
            if (m[v1[i]] == 0) {
                m.erase(v1[i]);
            }

            if (m[v2[i]] == 0) {
                m.erase(v2[i]);
            }

            // Prefix equal hai aur suffix ki frequencies bhi equal hain
            if (m.empty() && eq[i]) {
                ans++;
            }
        }

        // Total valid indices return karo
        return ans;
    }
};
