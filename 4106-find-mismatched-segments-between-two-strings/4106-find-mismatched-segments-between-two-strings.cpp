class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        int n = s1.size();
        int i=0;
        while(i<n){
            if(s1[i]==s2[i]){ 
                i++;
                continue;
            }
            string a="",b="";
            while(i<n && s1[i]!=s2[i]){
                a+=s1[i];
                b+=s2[i];
                i++;
            }
            ans.push_back({a,b});
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<vector<string>> findMismatchedSegments(string s1, string s2) {
//         vector<vector<string>> ans;
//         int j = 0;
//         bool inc = false;

//         for (int i = 0; i < s1.length(); i++) {

//             if (s1[i] != s2[i]) {

//                 if (!inc) {
//                     ans.push_back({"", ""});
//                     inc = true;
//                 }

//                 ans[j][0].push_back(s1[i]);
//                 ans[j][1].push_back(s2[i]);
//             }
//             else if (inc) {
//                 j++;
//                 inc = false;
//             }
//         }

//         return ans;
//     }
// };