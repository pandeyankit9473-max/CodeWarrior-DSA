class Solution {
public:
    int titleToNumber(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            int num=s[i]-'A'+1; //+1 bcz A=1 se start hh
            ans=ans*26+num;
        }
        return ans;
    }
};
// AB='A'*26+'B'=28..asat...