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
int maxdiameter=0;
int height(TreeNode* root){
    if(root==nullptr){
        return 0;
    }
    int leftheight=height(root->left);
    int rightheight=height(root->right);

    maxdiameter=max(maxdiameter,leftheight+rightheight);
    return 1+max(leftheight,rightheight);
}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxdiameter=0;
        height(root);
        return maxdiameter;
    }
};