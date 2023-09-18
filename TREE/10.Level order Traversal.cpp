class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
      /*  queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        q.push(root);
        while(1){
            int size=q.size();
            if(size==0)return ans;
            vector<int>data;
            while(size>0){
                TreeNode* temp=q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
                size--;
            }
            ans.push_back(data);
        }
        return ans;*/
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        q.push(root);
        while(1){
          //  if(!root)return;
            //if(size)
            int size=q.size();
            if(size==0)return ans;
            while(size>0){
                TreeNode* temp=q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left){
                q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
                size--;
            }
            ans.push_back(data);
        }
    }
};
