class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visit(V,false);
        vector<int>ans;
        queue<int>q;
        visit[0]=true;
        q.push(0);
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            ans.push_back(temp);
            for(auto it:adj[temp]){
                if(visit[it]==false){
                 visit[it]=true;
                 q.push(it);
                }
            }
        }
        return ans;
    }
};
