// Linked-List : Linear DS -> Collection of Nodes -> Data, Address of next node
// Adv -> Dynamic DS (grow/shrink at run-time), no memory wastage, insertion/deletion easy (no shift needed)
// Types -> Singly LL, Doubly LL, Circular LL, Circular Doubly LL



// #include <iostream>
// using namespace std;

// class Node {
//     public:
//         int data;
//         Node* next;

//         // Construction
//         Node(int data) {
//             this -> data = data;
//             this -> next = NULL;
//         }
// };

// int main() {
//     Node* node1 = new Node(10);
//     cout<<node1 -> data<<endl;
//     cout<<node1 -> next<<endl;

//     return 0;
// }




//----- Singly Linked List - Operations -----
#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        // Constructor
        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }

        // Destructor
        ~Node() {
            int value = this -> data;

            // memory free
            if(this -> next != NULL) {
                delete next;
                this -> next = NULL;
            }
            cout<<"Memory is Free for Node with Data -> "<<value<<endl;
        }
};

// Insertion at Begining
void insertAtHead(Node* &head, int d) {
    // new node create
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// Insertion at End
void insertAtTail(Node* &tail, int d) {
    // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// Insertion at Position
void insertAtPosition(Node* &head, Node* &tail, int pos, int d) {

    // insert at start
    if(pos == 1){
        insertAtHead(head, d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos-1) {
        temp = temp -> next;
        cnt++;
    }

    // insert at last pos
    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return ;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

// deletion at certain position
void deleteNode(int pos, Node* &head) {

    // delete start node
    if(pos == 1) {
        Node* temp = head;
        head = head -> next;

        // memory free start node
        temp -> next = NULL;
        delete temp;
    }
    else {

        // deleting any pos node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main() {

    // created a new node
    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;

    // head pointed to new node1
    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);

    insertAtTail(tail, 21);
    print(head);
    insertAtTail(tail, 51);
    print(head);

    insertAtPosition(head, tail, 3, 22);
    print(head);
    insertAtPosition(head, tail, 1, 26);
    print(head);
    insertAtPosition(head, tail, 8, 32);
    print(head);

    deleteNode(8, head);
    print(head);

    return 0;
}