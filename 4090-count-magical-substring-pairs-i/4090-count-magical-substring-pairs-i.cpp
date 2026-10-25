class Solution {
public:
    int countMagicalPairs(string s) {
        int n=s.length();
        long long ans=0;
        //we will start with split and count total split=n-1 and starts from 1 because we have to compare a non empty string not a empty one
        for(int j=1;j<n;j++){
            int leftfq[27]={};
            int rightfq[27]={};
            unordered_map<char,int>left;
            unordered_map<char,int>right;
            //cout distinct char left side
            for(int i=j-1;i>=0;i--){
                left[s[i]]++;
                leftfq[left.size()]++;
            }
            //  distinct char right sides....
            for(int i=j;i<n;i++){
                right[s[i]]++;
                rightfq[right.size()]++;
            }
        // Match substrings having the same number of distinct characters
        for(int k=1;k<=26;k++){
            ans+=leftfq[k]*rightfq[k];
        }
    }
        return ans;
    }
};