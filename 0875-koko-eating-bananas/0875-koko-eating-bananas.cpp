class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1 , ans =0;
        int high = *max_element(piles.begin(), piles.end());
        while(low<=high){
            int mid =low+(high-low)/2;
            long long hrs=0;
            for(int pile:piles){
                hrs +=(pile+mid-1)/mid;
            }
            if(hrs<=h){
                ans=mid;
                high=mid-1;
            }
            else 
            low=mid+1;

            
        }
        return ans;
    }
};