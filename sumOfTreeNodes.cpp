int sumOfTreeNodes(TreeNode<int>* root) {
    if (root == nullptr){
        return 0;
    }
    int sum = root -> data;

    for (int i = 0; i < root -> children.size(); i++){
        sum += sumOfTreeNodes(root -> children[i]);
    }

    return sum;
}
