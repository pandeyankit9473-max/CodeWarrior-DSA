class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int mins=INT_MAX;
        for(int i=0;i<n-1;i+=2){
            string a=to_string(nums[i]);
            string b=to_string(nums[i+1]);
            string c=a+b;
            int d=stoi(c);
            mins=min(mins,d);
        }
        return mins;
    }
};