/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> answer;
        dfs(root,answer);
        return answer;
    }

private:
	void dfs(Node *root, vector<int> &answer){
		if(!root){
			return;
		}

		for(auto node : root->children){
			dfs(node,answer);
		}
		answer.push_back(root->val);
	}
};