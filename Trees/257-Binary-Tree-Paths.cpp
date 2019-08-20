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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> answer;
        if(root){
        	string temp = "";
        	getPaths(root,answer,temp);
        }
        return answer;
    }

private:
	void getPaths(TreeNode *root, vector<string> &answer, string temp){
		if(!root){
			return;
		}

		temp += to_string(root->val);

		if(!root->left && !root->right){
			answer.push_back(temp);
		} else{
            temp += "->";
        }

		getPaths(root->left,answer,temp);
		getPaths(root->right,answer,temp);

	}
};