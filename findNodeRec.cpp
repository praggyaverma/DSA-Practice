int findNodeRec(Node *head, int n)
{
	if (head == NULL){
		return -1;
	}
	if (head -> data == n){
		return 0;
	}
	int smallAns = findNodeRec(head -> next, n);
	if (smallAns == -1){
		return -1;
	}
	return smallAns + 1;
}
