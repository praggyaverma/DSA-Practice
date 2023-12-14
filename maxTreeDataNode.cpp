TreeNode<int>* maxTreeDataNode(TreeNode<int>* root) {
    if (root == nullptr){
        return 0;
    }

    TreeNode<int> *max = root;
    for (int i = 0; i < root -> children.size(); i++){
        TreeNode<int> *temp = maxTreeDataNode(root -> children[i]);
        if (temp -> data > max -> data){
            max = temp;
        }
    }
    return max;
}
