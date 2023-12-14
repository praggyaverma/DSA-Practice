int numNodes(TreeNode<int>* root){
  if (root == nullptr){
    return 0;
  }
  int ans = 1;
  for (int i - 0; i < root -> children.size(); i++){
    ans += numNodes(root -> children[i])
  }
  return ans;
}
