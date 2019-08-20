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
    int maxDepth(Node* root) {
		int answer = 0;

		if(!root){
			return answer;
		}

		for(auto node : root->children){
			answer = 1 + max(answer,maxDepth(node));
		}

		return answer;
    }
};