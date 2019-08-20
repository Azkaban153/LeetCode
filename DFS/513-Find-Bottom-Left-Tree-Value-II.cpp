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
    int findBottomLeftValue(TreeNode* root) {
        int answer, height = 0;
        dfs(root,1,height,answer);
        return answer;
    }

private:
    void dfs(TreeNode *root, int depth, int &height, int &answer){
        if(!root){
            return;
        }

        if(depth > height){
            answer = root->val;
            height = depth;
        }

        dfs(root->left,depth+1,height,answer);
        dfs(root->right,depth+1,height,answer);

    }
};