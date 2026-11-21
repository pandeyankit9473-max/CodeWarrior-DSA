class Solution {
public:
    unordered_map<int,vector<int>>adj;
    vector<int>resultSize;
    vector<int>last;

    void dfs(int currNode, string &s, vector<int>&parent){
        int c=s[currNode]-'a';
        int nearestAnncestor=last[c];

        last[c]=currNode;
        for(int child: adj[currNode]){
            dfs(child,s,parent);
        }
        //bak to currnode
        last[c]=nearestAnncestor;
        
        //if currNode is root, it has no anncestor
        if(currNode!=0){
            int newParent=parent[currNode]; //old parent
            if(nearestAnncestor!=-1){
                newParent=nearestAnncestor;
            }
            parent[currNode]=newParent;

            resultSize[newParent]+= resultSize[currNode];

        }
    }

    vector<int> findSubtreeSizes(vector<int>& parent, string s) {
        int n=parent.size();
        //parent[i] = node
        //node is the parent of ith node
        //node ---> i
        for(int i=1;i<n;i++){
            int u=parent[i]; //u is the parent of ith node
            int v=i;
            adj[u].push_back(v);
        }
        resultSize.assign(n,1);
        last.assign(26,-1);
        dfs(0,s,parent);
        return resultSize;
    }
};