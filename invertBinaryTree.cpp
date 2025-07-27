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
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr) return{};
        //if the root is nullptr so return null ;
        TreeNode* temp=root->left;
        //first temp will point to root->left so that it store the value of left 
        root->left=root->right;
        //nnow root->left is pointing to root->right here links are changing 
        root->right=temp;
        //now root is changes and now it is pointing to root->left store in temp

        invertTree(root->left);
        //calling the recursiong to left and right is available 
        invertTree(root->right);
        return root;
        
        
    }
};