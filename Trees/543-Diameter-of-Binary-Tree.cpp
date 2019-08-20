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
    int answer = 0;

    int diameterOfBinaryTree(TreeNode* root) {
        dfs(root);
        return answer;
    }

private:
    int dfs(TreeNode *root){
        if(!root){
            return 0;
        }

        int left_height = dfs(root->left);
        int right_height = dfs(root->right);

        answer = max(answer,left_height+right_height);

        return 1 + max(left_height,right_height);
        }
};