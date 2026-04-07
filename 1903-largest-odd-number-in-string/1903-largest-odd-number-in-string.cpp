class Solution {
public:
    string largestOddNumber(string nums) {
        int n= nums.size();
        for(int i=n-1 ; i>=0;i--){
            if((nums[i]-'0')%2==1)
            return nums.substr(0 , i+1);
        }
        return "";
    }
};