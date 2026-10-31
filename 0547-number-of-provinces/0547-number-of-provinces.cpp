class Solution {
public:

   void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis) {

    vis[node] = true;

    for(auto neighbour : adj[node]) {

        if(!vis[neighbour]) {
            dfs(neighbour, adj, vis);
        }
    }
}

    int findCircleNum(vector<vector<int>>& isConnected) {
       int n=isConnected.size();
       vector<vector<int>>adj(n);
       for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(isConnected[i][j]==1 && i!=j)
                adj[i].push_back(j);
        }
       }
       vector<bool>vis(n,false);
       int cnt=0;
       for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                cnt++;
            }
       }
       return cnt;
    }

};