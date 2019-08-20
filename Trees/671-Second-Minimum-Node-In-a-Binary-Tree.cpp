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
    int findSecondMinimumValue(TreeNode* root) {
        int answer = -1;

        if(root){
        	priority_queue<int,vector<int>,greater<int>> nodes;
        	inorder(root,nodes);

        	int val = nodes.top();
        	nodes.pop();

        	while(!nodes.empty() && val == nodes.top()){
        		val = nodes.top();
        		nodes.pop();
        	}

        	answer = (!nodes.empty()) ? nodes.top() : answer;
        }

        return answer;
    }

private:
	void inorder(TreeNode *root, priority_queue<int,vector<int>,greater<int>> &nodes){
		if(!root){
			return;
		}

		inorder(root->left,nodes);
		nodes.push(root->val);
		inorder(root->right,nodes);
	}
};