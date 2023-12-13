Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    Node *fT = nullptr, *fH = nullptr, *h1 = head1, *h2 = head2;
	if (h1 == NULL) {
		return h2;
	} else if (h2 == NULL){
		return h1;
	}

while (h1 != NULL && h2 != NULL) {
    if (h1->data <= h2->data) {
        if (fH == NULL) {
            fH = h1;
            fT = h1;
        } else {
            fT->next = h1;
            fT = h1;
        }
        h1 = h1->next;
    } else {
        if (fH == NULL) {
            fH = h2;
            fT = h2;
        } else {
            fT->next = h2;
            fT = h2;
        }
        h2 = h2->next;
    }
}


    if(h1 == NULL)
    {
        fT -> next = h2;
    }else if (h2 == NULL)
    {
        fT -> next = h1;
    }
    return fH;

}
