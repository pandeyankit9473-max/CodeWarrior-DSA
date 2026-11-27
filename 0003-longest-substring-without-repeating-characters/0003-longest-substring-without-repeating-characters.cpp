class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        vector<int>hash(256,-1);
        int i=0,j=0;
        int maxi=0;
        while(j<n){
            if(hash[s[j]]!=-1){ //means its duplicates founds 
                i=max(hash[s[j]]+1,i); //taking max to stop backward moving
            }
            maxi=max(maxi,j-i+1);
            hash[s[j]]=j; //storing the last seen index
            j++;
        }
        return maxi;
    }
};