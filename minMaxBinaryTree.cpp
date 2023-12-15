/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/
#include <limits.h>
/*
	The FIRST value of the pair must be the MINIMUM value in the tree and 
	the SECOND value of the pair must be the MAXIMUM value in the tree
*/
pair<int, int> getMinAndMax(BinaryTreeNode<int> *root) {
	if (root == nullptr){
		pair<int, int> p;
		p.first = INT_MAX;
		p.second = INT_MIN;
		return p;
	}

	pair <int, int> left = getMinAndMax(root -> left);
	pair <int, int> right = getMinAndMax(root -> right);

	// terminal node
	if (left.first == INT_MAX && left.second == INT_MIN && right.first == INT_MAX && right.second == INT_MIN){
		return {root->data, root->data};
	}

	int minn = min(left.first, right.first);
	int maxx = max(left.second, right.second);

	if (root->data < minn){
		return {root->data, maxx};
	}
	else if (root -> data > maxx){
		return {minn, root->data};
	}
	else {
		return {minn, maxx};
	}
}a
