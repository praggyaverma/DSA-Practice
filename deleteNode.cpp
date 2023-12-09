Node* deleteNode(Node *head, int i)
{
    if (head == NULL){
        return NULL;  
    }

    if (i == 0){
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    int count = 0;

    while (temp->next != NULL && count < i - 1){
        temp = temp->next;
        count++;
    }
    if (temp->next != NULL)
    {
        Node *a = temp->next;
        Node *b = a->next;
        temp->next = b;
        delete a;
    }

    return head;
}
