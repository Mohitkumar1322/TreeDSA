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
    vector<int> rightSideView(TreeNode* root) {
        if(root==nullptr) return {};
        vector<int> ans;
        //storing ans into vector ans
        queue<TreeNode*> q;
        //creating the queue for BFS traversal
        q.push(root);
        //push the root into the q 
        while(!q.empty()){
            //while q is not empty do this operation
            int size=q.size();
            for(int i=0;i<size;i++){
                //traverse t he array of each level
                TreeNode* curr=q.front();
                //storing the  current node
                q.pop();
                if(i==size-1){
                    //if i ==size-1 which means traversal of each level done and push last element to ans
                    ans.push_back(curr->val);
                }
                //now check if there is a left or rifht and then push that into the queue
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
        }
        return ans;
        
    }
};