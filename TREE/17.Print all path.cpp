#include <iostream>
#include <algorithm>
using namespace std;

// Definition for a binary tree node
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxPathSum(TreeNode* root, int& maxSum) {
    if (root == nullptr) {
        return 0;
    }

    // Calculate the maximum path sum in the left and right subtrees
    int leftMax = max(0, maxPathSum(root->left, maxSum));
    int rightMax = max(0, maxPathSum(root->right, maxSum));

    // Calculate the maximum path sum that includes the current node
    int currentMax = root->val + leftMax + rightMax;

    // Update the global maximum path sum
    maxSum = max(maxSum, currentMax);

    // Return the maximum path sum that can continue upward
    return root->val + max(leftMax, rightMax);
}

int maxPathSum(TreeNode* root) {
    int maxSum = INT_MIN; // Initialize the maximum sum to a minimum value
    maxPathSum(root, maxSum);
    return maxSum;
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(2);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(1);
    root->right->right = new TreeNode(-25);
    root->right->right->left = new TreeNode(3);
    root->right->right->right = new TreeNode(4);

    int result = maxPathSum(root);
    cout << "Maximum Path Sum: " << result << endl;

    return 0;
}
