class Solution {
public:
     int isPossible(vector<int>& weights, int capacity){
        int sum=0;
        int day = 1;
        for(int i=0;i<weights.size();i++){
            if(sum+weights[i] <= capacity){
               sum += weights[i]; 
                }
            else{
                day++;
                i--;
                sum = 0;
            }
                
        }
          return day;
     }

    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high= accumulate(weights.begin(),weights.end(),0);
        int ans = 0;
        while(low<=high){
            int mid=(low+high)/2;
            int data = isPossible(weights ,mid);
            if(data > days ){
                low = mid+1;
            }
            else{
                ans = mid;
                high = mid-1;
            }
        }
        return ans;
    }
};