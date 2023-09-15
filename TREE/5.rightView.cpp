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
       while(size>0){
           Node* temp=q.front();
           q.pop();
          val=temp->data;
           if(temp->left!=NULL){
               q.push(temp->left);
           }
           if(temp->right!=NULL){
               q.push(temp->right);
           }
       }
      ans.push_back(val);
       
   }
   return ans;
}
