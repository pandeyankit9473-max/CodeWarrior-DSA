class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        long long ans=0;
        for(int i=0;i<n;i++){
            vector<int>freq(26,0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int maxi=0; // freq cant be -ve so we take 0 not int_min..
                int mini=INT_MAX;
                for(int k=0;k<26;k++){
                    if(freq[k]>0){
                         maxi=max(maxi ,freq[k]);
                         mini=min(mini , freq[k]);
                    }
                }
                ans+=(maxi-mini);
            }
        }
        return ans;
    }
};