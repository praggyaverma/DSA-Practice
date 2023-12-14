void printLevelWise(TreeNode<int>* root) {
    if (root == nullptr){
        return;
    }
    queue <TreeNode<int>*> nodes;
    nodes.push(root);
    
    while (!nodes.empty()){
        TreeNode<int> *front = nodes.front();
        nodes.pop();
        cout << front -> data << ":";
        for (int i = 0; i < front -> children.size(); i++){
            cout << front -> children[i] -> data;
            if ( i != front -> children.size() -1){
                cout << ",";
            }
            nodes.push(front -> children[i]);
        }
        cout << endl;
    }
}
