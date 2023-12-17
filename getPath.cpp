vector<int>* getPath(BinaryTreeNode<int> *root , int data) {
	if (root == nullptr){
		return NULL;
	}

	if (root -> data == data){
		vector<int>* ans = new vector<int>();
		ans->push_back(root -> data);
		return ans;
	}

	vector<int>* leftTree = getPath(root -> left, data);

	if (leftTree != NULL){
		leftTree->push_back(root -> data);
		return leftTree;
	}

	vector<int>* rightTree = getPath(root -> right, data);

	if (rightTree != NULL){
		rightTree->push_back(root -> data);
		return rightTree;
	} else {
		return NULL;
	}
}
