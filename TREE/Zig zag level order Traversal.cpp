class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (root == NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        bool reverseFlag = false; // Flag to determine if we need to reverse the order

        while (!q.empty()) {
            int size = q.size();
            vector<int> data;

            while (size > 0) {
                TreeNode* temp = q.front();
                q.pop();
                data.push_back(temp->val);

                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
                size--;
            }

            if (reverseFlag) {
                reverse(data.begin(), data.end());
            }

            ans.push_back(data);
            reverseFlag = !reverseFlag; // Toggle the flag for the next level
        }

        return ans;
    }
};
    
