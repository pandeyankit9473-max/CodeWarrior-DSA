class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.length();
        int l=0, r=0;
        int maxi=0;
        int hash[256];

    for(int i = 0; i < 256; i++){
        hash[i] = -1;   
}

       while(r<n){

        if(hash[s[r]]!=-1){
            l=max(hash[s[r]]+1,l);
        }
        maxi=max(maxi,r-l+1);
        hash[s[r]]=r;
        r++;

       }
        return maxi;
    }
};