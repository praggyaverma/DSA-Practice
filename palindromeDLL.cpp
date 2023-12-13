bool palindromeDLL(Node* head){
    if (head == NULL) {
        return true;
    }

    Node* tail = head;
    while (tail -> next != nullptr) {
        tail = tail->next;
    }

    while (head != tail && head->prev != tail) {
        if (head->data != tail->data) {
            return false;
        }
        head = head->next;
        tail = tail->prev;
    }

    return true;
}
