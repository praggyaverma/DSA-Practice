// for genertic tree
int getTreeHeight(TreeNode<int>* root) {
    if (root == nullptr){
        return 0;
    }

    int height = 0;

    for (int i = 0; i < root -> children.size(); i++){
        int temp = getTreeHeight(root -> children[i]);
        height = max(height, temp);
    }
    return height + 1;
}

// OR for height of Binary Tree

// option 1
int height(BinaryTreeNode<int>* root) {
	if (root == nullptr){
		return 0;
	}

	int h = 0;

	int ans = height(root -> left);
	h = max (ans, h);
	ans = height(root -> right);
	h = max(ans, h);

	return 1 + h;
}

// option 2
int height(BinaryTreeNode<int>* root) {
	if (root == nullptr){
		return 0;
	}
	return 1 + max(height(root->left), height(root->right));
}
