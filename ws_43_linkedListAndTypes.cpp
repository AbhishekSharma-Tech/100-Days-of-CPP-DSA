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
// #include <iostream>
// using namespace std;

// class Node {
//     public:
//         int data;
//         Node* next;

//         // Constructor
//         Node(int data) {
//             this -> data = data;
//             this -> next = NULL;
//         }

//         // Destructor
//         ~Node() {
//             int value = this -> data;

//             // memory free
//             if(this -> next != NULL) {
//                 delete next;
//                 this -> next = NULL;
//             }
//             cout<<"Memory is Free for Node with Data -> "<<value<<endl;
//         }
// };

// // Insertion at Begining
// void insertAtHead(Node* &head, int d) {
//     // new node create
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }

// // Insertion at End
// void insertAtTail(Node* &tail, int d) {
//     // new node create
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;
// }

// // Insertion at Position
// void insertAtPosition(Node* &head, Node* &tail, int pos, int d) {

//     // insert at start
//     if(pos == 1){
//         insertAtHead(head, d);
//         return ;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < pos-1) {
//         temp = temp -> next;
//         cnt++;
//     }

//     // insert at last pos
//     if(temp -> next == NULL) {
//         insertAtTail(tail, d);
//         return ;
//     }

//     // creating a node for d
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert -> next = temp -> next;
//     temp -> next = nodeToInsert;
// }

// // deletion at certain position
// void deleteNode(int pos, Node* &head) {

//     // delete start node
//     if(pos == 1) {
//         Node* temp = head;
//         head = head -> next;

//         // memory free start node
//         temp -> next = NULL;
//         delete temp;
//     }
//     else {

//         // deleting any pos node or last node
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < pos) {
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
//         }

//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//     }
// }

// void print(Node* &head) {
//     Node* temp = head;

//     while(temp != NULL) {
//         cout<< temp -> data <<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }

// int main() {

//     // created a new node
//     Node* node1 = new Node(10);
//     cout<<node1 -> data<<endl;
//     cout<<node1 -> next<<endl;

//     // head pointed to new node1
//     Node* head = node1;
//     Node* tail = node1;

//     insertAtHead(head, 12);
//     print(head);
//     insertAtHead(head, 15);
//     print(head);

//     insertAtTail(tail, 21);
//     print(head);
//     insertAtTail(tail, 51);
//     print(head);

//     insertAtPosition(head, tail, 3, 22);
//     print(head);
//     insertAtPosition(head, tail, 1, 26);
//     print(head);
//     insertAtPosition(head, tail, 8, 32);
//     print(head);

//     deleteNode(8, head);
//     print(head);

//     return 0;
// }





//----- Doubly Linked List -----
// #include <iostream>
// using namespace std;

// class Node {
//     public:
//         int data;
//         Node* prev;
//         Node* next;

//         // Constructor
//         Node(int d) {
//             this -> data = d;
//             this -> prev = NULL;
//             this -> next = NULL;
//         }

//         // Destructor
//         ~Node() {
//             int val = this -> data;
//             if(next != NULL) {
//                 delete next;
//                 next = NULL;
//             }
//             cout<<"Memory is Free for Node with Data -> "<<val<<endl;
//         }
// };

// // Traversing a LL
// void print(Node* head) {
//     Node* temp = head;

//     while(temp != NULL) {
//         cout<<temp -> data<<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }

// // Give Length of LL
// int getLength(Node* head) {
//     int len = 0;
//     Node* temp = head;

//     while(temp != NULL) {
//         len++;
//         temp = temp -> next;
//     }
//     return len;
// }

// // Insert at Start
// void insertAtHead(Node* &head, Node* &tail, int d) {

//     // empty list
//     if(head == NULL) {
//         Node* temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else {
//         Node* temp = new Node(d);
//         temp -> next = head;
//         head -> prev = temp;
//         head = temp;
//     } 
// }

// // Insert at Last
// void insertAtTail(Node* &tail, Node* &head, int d) {

//     if(tail == NULL) {
//         Node* temp = new Node(d);
//         tail = temp;
//         head = temp;
//     }
//     else {
//         Node* temp = new Node(d);
//         tail -> next = temp;
//         temp -> prev = tail;
//         tail = temp;
//     }
// }

// // Insert at Position
// void insertAtPosition(Node* &head, Node* &tail, int pos, int d) {

//     // insert at start
//     if(pos == 1) {
//         insertAtHead(head, tail, d);
//         return ;
//     }

//     Node* temp = head;
//     int cnt = 1;

//     while(cnt < pos-1) {
//         temp = temp -> next;
//         cnt++;
//     }

//     // insert at end
//     if(temp -> next == NULL) {
//         insertAtTail(tail, head, d);
//         return ;
//     }

//     // inserting at middle
//     Node* nodeToInsert = new Node(d);

//     nodeToInsert -> next = temp -> next;
//     temp -> next -> prev = nodeToInsert;
//     temp -> next = nodeToInsert;
//     nodeToInsert -> prev = temp;

// }

// // // deletion at certain position
// void deleteNode(int pos, Node* &head) {

//     // delete start node
//     if(pos == 1) {
//         Node* temp = head;
//         temp -> next -> prev = NULL;
//         head = temp -> next;
//         temp -> next = NULL;
//         delete temp;
//     }
//     else {

//         // deleting any pos node or last node
//         Node* curr = head;
//         Node* prev = NULL;

//         int cnt = 1;
//         while(cnt < pos) {
//             prev = curr;
//             curr = curr -> next;
//             cnt++;
//         }

//         curr -> prev = NULL;
//         prev -> next = curr -> next;
//         curr -> next = NULL;
//         delete curr;
//     }
// }

// int main() {
//     // Node* node1 = new Node(10);
//     // Node* head = node1;
//     // Node* tail = node1;

//     Node* head = NULL;
//     Node* tail = NULL;

//     print(head);
//     // cout<<"Length -> "<<getLength(head)<<endl;

//     insertAtHead(head, tail, 11);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     insertAtHead(head, tail, 15);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     insertAtTail(tail, head, 31);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     insertAtPosition(head, tail, 2, 101);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     insertAtPosition(head, tail, 1, 105);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     // insertAtPosition(head, tail, 7, 81);
//     // print(head);
//     insertAtPosition(head, tail, 6, 81);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     deleteNode(1, head);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     deleteNode(3, head);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     deleteNode(4, head);
//     print(head);
//     cout<<endl<<"Head -> "<<head -> data<<endl;
//     cout<<"Tail -> "<<tail -> data<<endl;

//     return 0;
// }





//----- Circular Linked List -----
#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        // Constructor
        Node(int d) {
            this -> data = d;
            this -> next = NULL;
        }

        ~Node() {
            int val = this -> data;
            if(this -> next != NULL) {
                delete next;
                next = NULL;
            }
            cout<<"Memory is Free for Node with Data -> "<<val<<endl;
        }
};

void insertNode(Node* &tail, int element, int d) {
    // assuming that the element is present in the list

    // empty list
    if(tail == NULL) {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else {
        // non-empty list
        // assuming that the element is present in the list

        Node* curr = tail;

        while(curr -> data != element) {
            curr = curr -> next;
        }

        // element found -> curr is representing element wala node
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

// Traversing
void print(Node* tail) {

    Node* temp = tail;

    // empty list
    if(tail == NULL) {
        cout<<"Empty List"<<endl;
        return ;
    }

    do {
        cout<<tail -> data<<" ";
        tail = tail -> next;
    } while(tail != temp);

    cout<<endl;
}

void deleteNode(Node* &tail, int value) {

    // empty list
    if(tail == NULL) {
        cout<<"List is Empty!!!"<<endl;
        return ;
    }
    else {
        // non-empty

        // assuming that "value" is present in the linked list
        Node* prev = tail;
        Node* curr = prev -> next;
        
        while(curr -> data != value) {
            prev = curr;
            curr = curr -> next;
        }    

        prev -> next = curr -> next;

        // Single node LL
        if(curr == prev) {
            tail = NULL;
        }

        // >=2 Node in LL
        else if(tail == curr) {
            tail = prev;
        }

        curr -> next = NULL;
        delete curr;
    }
}

int main() {

    Node* tail = NULL;

    // empty list me insert 
    insertNode(tail, 5, 3);
    print(tail);
    /*
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
    insertNode(tail, 9, 10);
    print(tail);
    */

    deleteNode(tail, 3);
    print(tail);
    /*
    deleteNode(tail, 10);
    print(tail);
    deleteNode(tail, 6);
    print(tail);
    */

    return 0;
}