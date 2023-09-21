class Solution {
public:
  int height(TreeNode* root){
         if(root==NULL)return 0;
        else
            return max(height(root->left),height(root->right))+1;
  }
     void inorder(TreeNode* root,bool & ans ){
        if(root!=NULL){
        inorder(root->left,ans);
        int lh=height(root->left);
        int rh=height(root->right);
        if(abs(lh-rh)>1)
            ans=ans && false;
        inorder(root->right,ans);
    }
    }
    bool isBalanced(TreeNode* root) {
        bool ans=true;
        inorder(root,ans);
        return ans;
    }
};
