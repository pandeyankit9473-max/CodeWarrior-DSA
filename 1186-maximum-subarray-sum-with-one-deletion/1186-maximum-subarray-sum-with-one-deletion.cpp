class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size();
        long long noDel=arr[0];
        long long  oneDel=INT_MIN;
        long long  ans=arr[0];
        for(int i=1;i<n;i++){
           long long  temp=noDel;
            noDel=max((long long)arr[i],noDel+arr[i]);
            oneDel=max(oneDel+arr[i],temp);
            ans=max({ans,noDel,oneDel});

        }
        return ans;
    }
};