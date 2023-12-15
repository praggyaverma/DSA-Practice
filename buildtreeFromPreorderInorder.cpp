/***********************************************************
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
BinaryTreeNode<int>* buildTree(int *preorder, int preLength, int *inorder, int inLength) {
	BinaryTreeNode<int>* root = new BinaryTreeNode<int> (preorder[0]);

	if (preLength == 0){
		return NULL;
	} else if (preLength == 1){
		return root;
	}

	int rootIndex = 0;

	for (int i = 0; i < inLength; i++){
		if (inorder[i] == root -> data){
			rootIndex = i;
		}
	}

	int leftLength = rootIndex;
	int rightLength = inLength - leftLength - 1;

	BinaryTreeNode<int>* left = buildTree(preorder + 1, leftLength, inorder, leftLength);
	BinaryTreeNode<int>* right = buildTree(preorder + 1 + leftLength, rightLength, inorder + 1 + leftLength, rightLength);

	root -> left = left;
	root -> right = right;

	return root;
}
