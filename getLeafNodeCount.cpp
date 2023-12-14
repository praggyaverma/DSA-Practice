int getLeafNodeCount(TreeNode<int>* root) {
    if (root == nullptr){
        return 0;
    }

    int countLeaf = 0;
    if (root -> children.size() == 0){
        return 1;
    }

    for (int i = 0; i < root -> children.size(); i++){
        int temp = getLeafNodeCount(root -> children[i]);
        countLeaf += temp;
    }

    return countLeaf;
}
