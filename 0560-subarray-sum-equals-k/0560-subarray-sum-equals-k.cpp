class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        //we will apply map and store the prefix sum till there like if we have to find s abarray k we will see till sum s how man s-x there in the prefix that will contribute to the ans
        map<int,int>mpp;
        mpp[0]=1;
        int prefSum=0,  cnt=0;
        for(int x:nums){
            prefSum+=x;
            int remove=prefSum-k;
            cnt+=mpp[remove];
            mpp[prefSum]++;
        }
        return cnt;
    }
};

// int n = nums.size();
//         int cnt =0;
//         for(int i=0;i<n;i++){
//             int sum=0;
//             for(int j=i;j<n;j++){ // loop i se start hoga na 
//                 sum += nums[j];
//                 if(sum==k) cnt++; // yaha break lgaoge to 1st iteration ke bad hi ruk jayega na ...
            
                

//             }
            
//         }
//         return cnt;
//     }