class MyLinkedList {
public:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    int size;

    MyLinkedList() {
        head = tail = nullptr;
        size = 0;
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;  // Out of bounds check
        Node* temp = head;
        for (int i = 0; i < index; i++) {
            temp = temp->next;
        }
        return temp->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if (size == 0) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
        size++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (size == 0) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) return; // Invalid index check
        if (index == 0) {
            addAtHead(val);
            return;
        }
        if (index == size) {
            addAtTail(val);
            return;
        }
        
        Node* newNode = new Node(val);
        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return; // Out of bounds check
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            size--;
            if (size == 0) tail = nullptr;
            return;
        }

        Node* temp = head;
        for (int i = 0; i < index - 1; i++) {
            temp = temp->next;
        }
        Node* nodeToDelete = temp->next;
        temp->next = temp->next->next;
        if (index == size - 1) tail = temp; // If deleting last node, update tail
        delete nodeToDelete;
        size--;
    }
};
