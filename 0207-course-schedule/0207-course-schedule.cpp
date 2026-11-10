class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
       vector<int>adj[n];
       vector<int>indegree(n,0);
       for(auto it: pre){
           adj[it[1]].push_back(it[0]);
           indegree[it[0]]++; //its not pair so cant use it.first or scnd
       }
      queue<int>q;
       for(int i=0;i<n;i++){
           if(indegree[i]==0) q.push(i);
       }
       
       vector<int>topo;
       while(!q.empty()){
           int node=q.front();
           q.pop();
           topo.push_back(node);
           for(auto it: adj[node]){
               indegree[it]--;
               if(indegree[it]==0) q.push(it);
           }
       }
       
       if(topo.size()==n) return true;
       return false;
         
    }
};