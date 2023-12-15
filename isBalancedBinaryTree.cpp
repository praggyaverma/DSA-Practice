int height(BinaryTreeNode<int> *root){
	if (root == nullptr){
		return 0;
	}
	return 1 + max(height(root->left), height(root->right));
}

bool isBalanced(BinaryTreeNode<int> *root) {
	if (root == nullptr){
		return true;
	}

	int leftH = height(root -> left);
	int rightH = height(root -> right);
	int diff = abs(leftH - rightH);

	if (diff <= 1 && isBalanced(root->left) && isBalanced(root->right)){
		return true;
	}

	return false;
}
