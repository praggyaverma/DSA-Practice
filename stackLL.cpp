/************************************************************
 
    Following is the structure of the node class 
 
    class Node {
    	public :
    	int data;
    	Node *next;

    	Node(int data) {
        	this->data = data;
        	next = NULL;
    	}
	};

**************************************************************/
class Stack {
    int size;
    Node *head;
   public:
    Stack() {
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        return size;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void push(int element) {
        Node *newNode = new Node(element);
        if (head == NULL){
            head = newNode;
        } else {
            newNode -> next = head;
            head = newNode;
        }
        size++;
    }

    int pop() {
        if (head == NULL){
            return -1;
        }
        int ans = head -> data;
        head = head -> next;
        size--;
        return ans;
    }

    int top() {
        if (head == NULL){
            return -1;
        }
        return head -> data;
    }
};
