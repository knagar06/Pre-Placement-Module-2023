class MyLinkedList {

	struct Node {
		int value;
		Node* next;
		Node(int value = 0, Node* next = nullptr) : value(value), next(next)
		{

		}

		~Node() {
			delete next;
		}
	};

public:
	MyLinkedList() : head(nullptr)
	{

	}

	~MyLinkedList() {
		delete head;
	}

	int get(int index) {
		if (head == nullptr) return -1;

		int step = 0;
		Node* current = head;

		while (current->next != nullptr && step < index) {
			current = current->next;
			step++;
		}

		if (step == index) return current->value;
		return -1;
	}

	void addAtHead(int value) {
		if (head == nullptr) {
			head = new Node(value, nullptr);
			return;
		}

		head = new Node(value, head);
	}

	void addAtTail(int value) {
		if (head == nullptr) {
			head = new Node(value, nullptr);
			return;
		}

		Node* current = head;
		int step = 0;

		while (current->next != nullptr) {
			current = current->next;
		}

		current->next = new Node(value);
	}

	void addAtIndex(int index, int value) {
		if (index == 0) {
			addAtHead(value);
			return;
		}

        if (head == nullptr) return;
        
		Node* current = head;
		Node* prev = nullptr;
		int step = 0;

		while (current->next != nullptr && step < index) {
			prev = current;
			current = current->next;
			step++;
		}

		if (step == index) {
			prev->next = new Node(value, current);
		}

		if (step == index - 1) {
			current->next = new Node(value);
		}
	}

	void deleteAtIndex(int index) {
		if (head == nullptr) return;

		if (index == 0) {
			Node* temp = head;
			head = head->next;
			temp->next = nullptr;
			delete temp;
			return;
		}

		Node* current = head;
		Node* prev = nullptr;
		int step = 0;

		while (current->next != nullptr && step < index) {
			prev = current;
			current = current->next;
			step++;
		}

		if (step == index) {
			prev->next = current->next;
			current->next = nullptr;
			delete current;
		}
	}

private:
	Node* head;
};
