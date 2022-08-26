//----- Reverse List in K Groups -----
// T.C -> O(n)
// S.c -> O(n)

/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

// Node* kReverse(Node* head, int k) {
//     // base case
//     if(head == NULL) {
//         return NULL;
//     }
    
//     // step1: reverse 1st k nodes
//     Node* next = NULL;
//     Node* curr = head;
//     Node* prev = NULL;
//     int count = 0;
    
//     while(curr != NULL && count < k) {
//         next = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = next;
//         count++;
//     }
    
//     // step2: recursion dekhlo aage ka
//     if(next != NULL) {
//         head -> next = kReverse(next, k);
//     }
    
//     // step3: return head of reversed list
//     return prev;
// }





//----- Circular Linked -----
// T.C -> O(n)
// S.C -> O(1)

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


bool isCircularList(Node* head) {
    // empty list
    if(head == NULL) {
        return true;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head) {
        temp = temp -> next;
    }

    if(temp == head) {
        return true;
    }

    return false;
}



int main() {

    Node* tail = NULL;

    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);


    if(isCircularList(tail)) {
        cout<<"Linked List is Circular"<<endl;
    }
    else {
        cout<<"Linked List is Not Circular"<<endl;
    }


    return 0;
}




//--- Doubly LL (Circular or Not) ---

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


// bool isCircularList(Node* head) {
//     // empty list
//     if(head == NULL) {
//         return true;
//     }

//     Node* temp = head -> next;
//     while(temp != NULL && temp != head) {
//         temp = temp -> next;
//     }

//     if(temp == head) {
//         return true;
//     }

//     return false;
// }


// int main() {

//     Node* head = NULL;
//     Node* tail = NULL;

//     print(head);

//     insertAtHead(head, tail, 11);
//     print(head);

//     insertAtHead(head, tail, 15);
//     print(head);

//     insertAtTail(tail, head, 31);
//     print(head);

//     insertAtPosition(head, tail, 2, 101);
//     print(head);

//     insertAtPosition(head, tail, 1, 105);
//     print(head);

//     insertAtPosition(head, tail, 6, 81);
//     print(head);


//     if(isCircularList(tail)) {
//         cout<<"Linked List is Circular"<<endl;
//     }
//     else {
//         cout<<"Linked List is Not Circular"<<endl;
//     }


//     return 0;
// }




//--- Singly LL (Circular or Not) ---

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

// void print(Node* &head) {
//     Node* temp = head;

//     while(temp != NULL) {
//         cout<< temp -> data <<" ";
//         temp = temp -> next;
//     }
//     cout<<endl;
// }


// bool isCircularList(Node* head) {
//     // empty list
//     if(head == NULL) {
//         return true;
//     }

//     Node* temp = head -> next;
//     while(temp != NULL && temp != head) {
//         temp = temp -> next;
//     }

//     if(temp == head) {
//         return true;
//     }

//     return false;
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


//     if(isCircularList(tail)) {
//         cout<<"Linked List is Circular"<<endl;
//     }
//     else {
//         cout<<"Linked List is Not Circular"<<endl;
//     }


//     return 0;
// }