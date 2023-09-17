vector<int>v;
        if(root==NULL) return v;
      
        map<int,int>mp;
      
        queue<pair<Node*,int>>q;
       
        q.push({root,0});
      
        while(!q.empty()){
            auto pre=q.front();
            
            Node* node= pre.first;
            int line = pre.second;
            q.pop();
            if(mp.find(line)==mp.end()){
                mp[line]=node->data;
            }
            if(node->left){
               q.push({node->left,line-1});
            }
            if(node->right){
                 q.push({node->right,line+1});
            }
        }
        
        for(auto it:mp){
            v.push_back(it.second);
        }
        return v;
