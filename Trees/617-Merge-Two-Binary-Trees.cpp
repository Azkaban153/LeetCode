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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if(!t1 && !t2){
        	return NULL;
        } else if(!t1 && t2){
        	return t2;
        } else if(t1 && !t2){
        	return t1;
        }

        TreeNode *root = new TreeNode();
        root->val = t1->val + t2->val;

        root->left = mergeTrees(t1->left,t2->left);
        root->right = mergeTrees(t1->right,t2->right);

        return root;
    }
};