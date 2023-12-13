
Node *rotate(Node *head, int k) {
    if (head == nullptr || k == 0) {
        return head;
    }

    int length = 1;
    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
        length++;
    }

    k = k % length;

    if (k == 0) {
        return head;
    }

    Node* newTail = head;
    for (int i = 1; i < length - k; ++i) {
        newTail = newTail->next;
    }

    Node* newHead = newTail->next;
    newTail->next = nullptr;
    tail->next = head;

    return newHead;
}
