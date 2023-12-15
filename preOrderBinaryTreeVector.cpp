void helper(TreeNode<int> * root, vector<int>& ans){
    if (root == nullptr) return;

    ans.push_back(root -> data);
    helper(root -> left, ans);
    helper(root -> right, ans);

}
vector<int> preOrderBinaryTreeVector(TreeNode<int> * root){
    vector<int> ans;
    helper(root, ans);
    return ans;
}
