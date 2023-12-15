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

BinaryTreeNode<int>* buildTree(int *postorder, int postLength, int *inorder, int inLength) {
	BinaryTreeNode<int>* root = new BinaryTreeNode(postorder[postLength - 1]);

	if (postLength == 1){
		return root;
	} else if (postLength == 0){
		return NULL;
	}

	int rootIndex = 0;

	for(int i = 0; i < inLength; i++){
		if (inorder[i] == root -> data){
			rootIndex = i;
		}
	}

	int leftLength = rootIndex;
	int rightLength = postLength - leftLength - 1;

	BinaryTreeNode<int>* left = buildTree(postorder, leftLength, inorder, leftLength);
	BinaryTreeNode<int>* right = buildTree(postorder + leftLength, rightLength, inorder + leftLength + 1, rightLength);

	root -> left = left;
	root -> right = right;

	return root;
}
