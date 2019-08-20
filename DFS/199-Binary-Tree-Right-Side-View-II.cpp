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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> answer;
        dfs(answer,root,0);
        return answer;
    }

private:
	void dfs(vector<int> &answer, TreeNode *root, int level){
		if(!root){
			return;
		}

		if(answer.size() <= level){
			answer.push_back(root->val);
		} else{
			answer[level] = root->val;
		}

		dfs(answer,root->left,level+1);
		dfs(answer,root->right,level+1);

	}

};