class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string prefix="";
        for(int i=0;i<strs[0].size();i++){
            char ch=strs[0][i];
            for(int j=1;j<n;j++){
                if(i>=strs[j].size()||strs[j][i]!=ch)
                return prefix;
                
            }
           prefix+=ch;
        }
        return prefix;
    }
};
// first string ko reference lo
// aur uske characters ko baaki sab strings se compare karo
// jab mismatch aaye → prefix wahi tak