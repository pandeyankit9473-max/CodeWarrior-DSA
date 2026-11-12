class Solution {
public:

    bool dfs( unordered_map<int,vector<int>>&adj, int u, int v, vector<bool>& vis){
        vis[u]=true;
        if(u==v) return true; //means adding that nodes makes a cycles....
        for(auto it: adj[u]){
            if(!vis[it]){
                if(dfs(adj,it,v,vis))
                    return true;
            }
                
        }
        return false;
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
         unordered_map<int,vector<int>>adj;
         for(int i=0;i<n;i++){
            int u= edges[i][0];
            int v=edges[i][1];
            vector<bool>vis(n,false);
            if(adj.find(u)!=adj.end() && adj.find(v)!=adj.end()&& dfs(adj,u,v,vis))
                return edges[i];
            adj[u].push_back(v);
            adj[v].push_back(u);
         }
         return {};
    }
};

// class Solution {
// public:

//     vector<int> parent;

//     int find(int x) {
//         if(parent[x] == x)
//             return x;

//         return parent[x] = find(parent[x]);
//     }

//     void unite(int a, int b) {
//         a = find(a);
//         b = find(b);

//         parent[a] = b;
//     }

//     vector<int> findRedundantConnection(vector<vector<int>>& edges) {

//         int n = edges.size();

//         parent.resize(n + 1);

//         for(int i = 1; i <= n; i++) {
//             parent[i] = i;
//         }

//         for(auto &it : edges) {

//             int u = it[0];
//             int v = it[1];

//             if(find(u) == find(v)) {
//                 return {u, v};
//             }

//             unite(u, v);
//         }

//         return {};
//     }
// };