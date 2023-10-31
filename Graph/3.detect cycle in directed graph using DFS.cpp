class Solution {
public:
  bool DFSrec(int s,vector<bool>&visited,vector<bool>&currvisited,vector<int>adj[]){
      visited[s]=true;
      currvisited[s]=true;
      vector<int>data=adj[s];
      for(auto x:data){
          if(!visited[x]){
              if(DFSrec(x,visited,currvisited,adj)){
                  return true;
              }
          }
          else if(visited[x] && currvisited[x]){
              return true;
          }
      }
      currvisited[s]=false;
      return false;

  }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n=numCourses;
        vector<bool>visited(n,false);
        vector<bool>currvisited(n,false);
        vector<int>adj[n];
        for(auto x:prerequisites){
            vector<int>data=x;
            int a=data[0];
            int b=data[1];
            adj[a].push_back(b);
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                if(DFSrec(i,visited,currvisited,adj))return false;
            }
        }
        return true;
    }
};
