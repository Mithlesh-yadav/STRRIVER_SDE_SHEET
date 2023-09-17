class Solution {
  public:
    vector <int> bottomView(Node *root) {
        vector<int> ans;
        if (root == NULL) return ans;
        map<int, int> umap;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while (!q.empty()) {
            auto temp = q.front();
            q.pop();
            Node* node = temp.first;
            int hd = temp.second;
            umap[hd] = node->data;
            if (node->left) {
                q.push({node->left, hd - 1});
            }
            if (node->right) {
                q.push({node->right, hd + 1});
            }
        }
        for (auto i : umap) {
            ans.push_back(i.second);
        }
        return ans;
    }
};
