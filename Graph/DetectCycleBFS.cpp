
#include <bits/stdc++.h>
using namespace std;


class Solution {
    
private:

bool detect(int src,vector<int>adj[],int vis[]){
    vis[src]=1;
    
    queue<pair<int,int>> q;
    q.push(src,-1);
    
    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front.second;
        q.pop();
        
        for(auto adjN:adj[node]){
            if(!vis[adjN]){
                vis[adjN]=1;
                q.push({adjN,node});
            }
            
            else if(parent !=adjN){
                return true;
            }
        }
    }
}
  public:
   
    bool isCycle(int V,vector<vector<int>> adj) {
        // Code here
        int vis[V]=0;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(detect(i,adj,vis)) return true 
            }
        }
        return flase;
    }
};


int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
