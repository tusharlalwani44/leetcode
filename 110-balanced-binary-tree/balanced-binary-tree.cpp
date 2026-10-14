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
private:
int BalancedBinaryTree(TreeNode*root){
    //base case 
    if(root==nullptr) return 0;
    // Recursively find the height of the left and right subtrees
        int leftheight = BalancedBinaryTree(root->left);
        if(leftheight==-1) return -1;
        int rightheight = BalancedBinaryTree(root->right);
        if(rightheight==-1){
             return -1;
        }
        if(abs(leftheight-rightheight)>1){
            return -1;
        }
        // return max height
        return max(leftheight,rightheight)+1;
};
public:
    bool isBalanced(TreeNode* root) {
        return BalancedBinaryTree(root)!=-1;
    }
};