/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> answer;
        dfs(root,0,answer);
        return answer;
    }

private:
    void dfs(TreeNode *root, int row, vector<int> &answer){
        if(!root){
            return;
        }

        if(row >= answer.size()){
            answer.push_back(root->val);
        } else{
            answer[row] = max(answer[row],root->val);
        }

        dfs(root->left,row+1,answer);
        dfs(root->right,row+1,answer);

    }
};