class Solution {
public:
   bool canMake(vector<int>& bloomDay, int m, int k, int day) {
    int flowers=0;
    int bouquet=0;
    for(int i=0;i<bloomDay.size();i++){
        if(bloomDay[i]<=day){
           flowers++;
           if(flowers==k){
            bouquet++;
            flowers=0;
           } 
        }
        else
        flowers=0;
    }
      return bouquet>=m; // means if boquest got more than or equalt to m return that....
   }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n) return -1; // req flower must not greater than the bloomed in the garden...
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high= *max_element(bloomDay.begin(), bloomDay.end());
        while(low<high){
            int mid=(low+high)/2;
            if(canMake(bloomDay ,m,k,mid))
            high=mid;
            else
            low=mid+1;

        }
        return low;
    }
};
// the array contains the bllom days of the glowe like ex.3 me 7 flower hai first flower 7 day 2nd bhi 3rd bhi 4th bhi but 5th flower will be on 12th day so on....