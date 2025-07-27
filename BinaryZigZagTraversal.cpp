class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if (root == nullptr) return {};

        stack<TreeNode*> st1, st2;
        //2 stack is used 
        vector<vector<int>> ans;
        //2d vector is used for the ans 
        st1.push(root);
        //first root is pushed into stack1
        while (!st1.empty() || !st2.empty()) {
            vector<int> result;
        //getting each level in result for that initialize the result vector

            // Left to Right
            while (!st1.empty()) {
                TreeNode* curr = st1.top();
                st1.pop();
                result.push_back(curr->val);

                if (curr->left) st2.push(curr->left);
                if (curr->right) st2.push(curr->right);
            }
            if (!result.empty()) ans.push_back(result);

            result.clear();
            //this clear the array 

            // Right to Left
            while (!st2.empty()) {
                TreeNode* curr2 = st2.top();
                st2.pop();
                result.push_back(curr2->val);

                if (curr2->right) st1.push(curr2->right);
                if (curr2->left) st1.push(curr2->left);
            }
            if (!result.empty()) ans.push_back(result);
        }

        return ans;
    }
};
