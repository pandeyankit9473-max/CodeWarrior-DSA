class Solution {
public:

    int partition(vector<int>&nums, int l, int r){
        int pivot=nums[l];
        int i=l+1; //+1 because to get rid of sinle elements..
        int j=r;
        while(i<=j){
            if(nums[i]<pivot && nums[j]>pivot){
                swap(nums[i],nums[j]);
                i++; j--;
            }
           if(nums[i]>=pivot) i++;
           if(nums[j]<=pivot) j--;
        }
        swap(nums[j], nums[l]);
        return j;
    }

    int findKthLargest(vector<int>& nums, int k) {
        int n= nums.size();
        int l=0, r=n-1;
        while(true){
            int pivotIndex=partition(nums, l, r);
            if(pivotIndex==k-1) return nums[pivotIndex];
            else if(pivotIndex<k-1) l=pivotIndex+1;
            else r=pivotIndex-1;
        }
    }
};