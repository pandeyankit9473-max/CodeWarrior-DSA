class Solution {
public:
    int countRotations(string s, int k) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++){
           int cnt=0;
           for(int j=1;j<n;j++){
            if(s[j]==s[j-1]) cnt++;
           }
           if(cnt==k) ans++;
           char ch=s[0];
           for(int k=0;k<n-1;k++) s[k]=s[k+1];
           s[n-1]=ch;

        }
        return ans;
    }
};