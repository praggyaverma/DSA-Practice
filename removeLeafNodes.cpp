BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
	if (root == nullptr){
		return NULL;
	}

	if (root -> left == NULL && root -> right == NULL){
		return NULL;
	}
	root -> left = removeLeafNodes(root -> left);
	root -> right = removeLeafNodes(root -> right);

	return root;
}
