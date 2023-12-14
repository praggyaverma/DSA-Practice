int getLargeNodeCount(TreeNode<int>* root, int x) {
    if (root == nullptr){
        return 0;
    }
    int count = 0;
    for (int i = 0; i < root -> children.size(); i++){
        count += getLargeNodeCount(root -> children[i], x);
    }

    if (root -> data > x){
        return count + 1;
    } else {
        return count;
    }
}
