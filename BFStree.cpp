class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root ==nullptr) return {};
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* front = q.front();
                q.pop();
                level.push_back(front->val);
                if(front->left!=nullptr) q.push(front->left);
                if(front->right!=nullptr) q.push(front->right);
            }
            ans.push_back(level);
            
            //level.push_back(front);
            //ans.push_back(level);
            
        }
        return ans;
        
    }
};