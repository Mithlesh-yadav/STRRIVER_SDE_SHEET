int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ceil=-1;
    while(node){
        if(node->data==x)
        {
            ceil=node->data;
            return ceil;
        }
        if(node->data<x)
        {
            root=root->right;
        }
        else{
            ceil=node->data;
            root=root->left;
        } 
    }
    return ceil;
}
