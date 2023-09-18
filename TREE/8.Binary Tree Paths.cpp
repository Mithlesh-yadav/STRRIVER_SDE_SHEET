class Solution {
public:
void Path(TreeNode * root, vector<string>&v, string r){
    if(!root)return;
    if(!root->left && !root->right){
        r+=to_string(root->val);
        v.push_back(r);
       // return;
    }
    r+=to_string(root->val);
    Path(root->left,v,r+"->");
    Path(root->right,v,r+"->");
}
    vector<string> binaryTreePaths(TreeNode* root) {

        string r="";
        vector<string>v;
        Path(root,v,r);
        return v;
    }
};
