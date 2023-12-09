Node *removeDuplicates(Node *head)
{
	Node *temp = head;

	if (head == NULL || head-> next == NULL){
		return head;
	}

	int index = 0;
	while (temp-> next != NULL){
		if (temp -> data == temp -> next -> data){
			temp -> next = temp -> next -> next;
		} else{
			temp = temp -> next;
		}
	}
	return head;
}
