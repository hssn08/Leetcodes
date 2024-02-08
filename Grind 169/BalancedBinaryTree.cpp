/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int heightofsub(TreeNode* root){
   if (root == NULL) {
            return 0;
        }

        int leftHeight = heightofsub(root->left);
        int rightHeight = heightofsub(root->right);

        return 1 + max(leftHeight, rightHeight);
    }


    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        int left=heightofsub(root->left);
        int right=heightofsub(root->right);
        if(right-left>1||right-left<-1){
            return false;
        }
    if (isBalanced(root->left) == false) {
    return false;
} else if (isBalanced(root->right) == false) {
    return false;
} else {
    return true;
}

    }
};