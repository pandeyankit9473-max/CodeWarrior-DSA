class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int>a;
        int i=0 ,j=0;
        while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]) a.push_back(nums1[i++]);
            else
            a.push_back(nums2[j++]);
        }
        while(i<n1) a.push_back(nums1[i++]);
            while(j<n2) a.push_back(nums2[j++]);
        int n=a.size();
        if(n%2==1) return a[n/2];
        else 
        return (a[n/2]+a[n/2-1])/2.0;
        
    }
};
// one mistake i am doing here like if i declare a vector array with the size its not need to use a.push back waala mujhe index use karni chaiye ya normally size hata do