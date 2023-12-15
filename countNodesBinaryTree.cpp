int countNodesBinaryTree(BinaryTreeNode<int> *root){
  if (root == nullptr){
    return 0;
  }
  return 1 + countNodesBinaryTree(root -> left) + countNodesBinaryTree(root -> right):
}
