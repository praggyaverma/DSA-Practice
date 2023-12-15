/**********************************************************

	Following is the Binary Tree Node class structure

	template <typename T>
	class BinaryTreeNode {
    	public : 
    	T data;
    	BinaryTreeNode<T> *left;
    	BinaryTreeNode<T> *right;

    	BinaryTreeNode(T data) {
        	this -> data = data;
        	left = NULL;
        	right = NULL;
    	}
	};

***********************************************************/

void printLevelWise(BinaryTreeNode<int> *root) {
	if (root == nullptr){
		return;
	}

	queue<BinaryTreeNode<int>*> nodes;
	nodes.push(root);

	while (!nodes.empty()){
		BinaryTreeNode<int> *front = nodes.front();
		nodes.pop();

		cout << front -> data << ":";
		if (front -> left != nullptr){
			cout << "L:" << front -> left -> data << ",";
			nodes.push(front -> left);
		} else {
			cout << "L:" << -1 << ",";
		}
		if (front -> right != nullptr){
			cout << "R:" << front -> right -> data;
			nodes.push(front -> right);
		} else {
			cout << "R:" << -1;
		}
		cout << endl;
	}
}
