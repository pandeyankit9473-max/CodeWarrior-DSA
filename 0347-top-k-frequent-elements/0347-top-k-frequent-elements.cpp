class Solution {
public:
    typedef pair<int,int>p;
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int num: nums) mpp[num]++;
        priority_queue<p,vector<p>,greater<p>>pq; //min heap...
        for(auto&it:mpp){
            int value=it.first;
            int freq=it.second;
            pq.push({freq,value});
            while(pq.size()>k) pq.pop();
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};