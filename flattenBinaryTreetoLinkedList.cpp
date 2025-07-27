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
    TreeNode* prev=nullptr;
    //we are trying right->left->root
    //reverse post order we are doing 
    void flatten(TreeNode* root) {
        if(root==nullptr) return;
        flatten(root->right);
        flatten(root->left);
        //then go to right then left call the recursion
        root->right=prev;
        // first last node in point to 6->nullptr 
        root->left=nullptr;
        prev=root;
        //6 is pointed to nullptr then prev=root;

        

        
        
    }
};