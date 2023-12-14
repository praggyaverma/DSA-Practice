void depthTreeNode(TreeNode<int> *root, int k){
  if (root == nullptr){
    return;
  }
  if (k == 0){
    cout << root -> data << endl;
    return;
  }

  for (int i = 0; i < root -> children.size();  i++){
    depthTreeNode(root ->children[i], k - 1);
  }
}  
