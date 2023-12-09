/****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/
int length(Node *head){
	int count = 0;
	Node *temp = head;
	while (temp != NULL){
		count++;
		temp = temp -> next;
	}
	return count;
}

Node *appendLastNToFirst(Node *head, int n) {
    int len = length(head);

    if (head == NULL || n == 0 || n >= len) {
        return head;
    }

    int pos = len - n;
    Node *temp = head;
    Node *a = head;
    Node *b = NULL;

    for (int i = 0; i < pos; i++) {
        b = temp;
        temp = temp->next;
    }

    b->next = NULL;
    head = temp;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = a;

    return head;
}
