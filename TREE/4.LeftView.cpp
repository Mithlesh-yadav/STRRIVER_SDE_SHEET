vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>ans;
   queue<Node*>q;
   q.push(root);
   if(root==NULL)return ans;
   while(!q.empty()){
       int val=0;
       int size=q.size();
       if(size==0)return ans;
       for(int i=0;i<size;i++){
           Node* temp=q.front();
           q.pop();
          
           if(temp->left!=NULL){
               q.push(temp->left);
           }
           if(temp->right!=NULL){
               q.push(temp->right);
           }
            if(i==0){
               val=temp->data;
                ans.push_back(val);
           }
          // ans.push_back(val);
       }


      //using recursion 
      void solve(Node* root, vector<int> &ans, int level)
{
    if(root == NULL)
        return;  
    if(level == ans.size())
        ans.push_back(root -> data);
    solve(root -> left, ans, level + 1);
    solve(root -> right, ans, level + 1);
}
vector<int> leftView(Node *root)
{
    // Your code here
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}
       
   }
   return ans;
}
