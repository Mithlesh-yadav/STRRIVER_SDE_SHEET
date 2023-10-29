class Solution {
public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFS(vector<int> adj[], int i, vector<bool>& visit, vector<int>& ans) {
        visit[i] = true;
        ans.push_back(i);
        for (auto it : adj[i]) {
            if (!visit[it]) {
                DFS(adj, it, visit, ans);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<bool> visit(V, false); // Initialize visit vector with size V.
        for (int i = 0; i < V; i++) {
            if (!visit[i]) {
                DFS(adj, i, visit, ans);
            }
        }
        return ans;
    }
};
