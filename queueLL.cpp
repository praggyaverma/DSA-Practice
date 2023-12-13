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

class Queue {
	Node *head;
	Node *tail;
	int size;
   public:
    Queue() {
		Node *head = nullptr;
		Node *tail = nullptr;
		int size = 0;
	}
	
	/*----------------- Public Functions of Stack -----------------*/

	int getSize() {
		return size;
	}

    bool isEmpty() {
		return head == nullptr;
	}

    void enqueue(int data) {
		Node *newNode = new Node(data);
		if (head == nullptr){
			head = newNode;
			tail = newNode;
		} else {
			tail -> next = newNode;
			tail = newNode;
		}
		size++;
	}

    int dequeue() {
		if (head == NULL){
			return -1;
		}
		int ans = head -> data;
		head = head -> next;
		size--;
		return ans;
    }

    int front() {
		if (head == NULL){
			return -1;
		}
		return head -> data;
    }
};
