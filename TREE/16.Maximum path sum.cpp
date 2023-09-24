class Solution {
public:
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
};
