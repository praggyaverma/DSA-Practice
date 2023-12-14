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
