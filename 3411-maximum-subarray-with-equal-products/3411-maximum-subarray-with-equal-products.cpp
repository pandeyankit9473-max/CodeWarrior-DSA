class Solution {
public:
    int maxLength(vector<int>& nums) {
        int n=nums.size();
        int product=1;
        
        int len=2; //by defalt barray of length 2 is naturally product equivalent, so the answer is at least 2

        int i=0,j=0; //i=start and j=end point where it reached
        while(j<n){
            while(gcd(product,nums[j])!=1){
                product= product/nums[i];
                i++;
            }
            product*=nums[j];
            len =max(len,j-i+1);
            j++; //ye mistake ka -----
        }
        return len;
    }
};