class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            int n= nums.size();
            unordered_map<int,int>mpp;
            for(int num: nums) mpp[num]++;
            vector<vector<int>> bucket(n+1); // index=freq
            for(auto&it:mpp){
                int freq=it.second;
                int val= it.first;
                bucket[freq].push_back(val);
            }
             vector<int>ans;
            for(int i=n;i>=1 && k>0;i--){
                while(!bucket[i].empty() && k>0){
                    ans.push_back(bucket[i].back());
                    bucket[i].pop_back();
                    k--;
                }
            }
            return ans;
    }
};



// class Solution {
// public:
//     typedef pair<int,int>p;
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int>mpp;
//         for(int num: nums) mpp[num]++;
//         priority_queue<p,vector<p>,greater<p>>pq; //min heap...
//         for(auto&it:mpp){
//             int value=it.first;
//             int freq=it.second;
//             pq.push({freq,value});
//             while(pq.size()>k) pq.pop();
//         }
//         vector<int>ans;
//         while(!pq.empty()){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         return ans;
//     }
// };