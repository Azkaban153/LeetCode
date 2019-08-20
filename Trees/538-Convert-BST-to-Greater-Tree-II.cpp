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
    TreeNode* convertBST(TreeNode* root) {
        if(!root){
            return root;
        }
        vector<TreeNode *> inorder;

        populateInorder(root,inorder);

        for(int i=inorder.size()-2; i>=0; i--){
            inorder[i]->val += inorder[i+1]->val;
        }

        return root;
    }

private:
    void populateInorder(TreeNode *root, vector<TreeNode *> &inorder){
        if(!root){
            return;
        }

        populateInorder(root->left,inorder);
        inorder.push_back(root);
        populateInorder(root->right,inorder);
    }
};