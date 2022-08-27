#include <iostream>
#include <map>
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

void print(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout<< temp -> data <<" ";
        temp = temp -> next;
    }
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


//--- Approach 1 -> Using Map ---
// T.C -> O(n)
// S.C -> O(n)
bool detectLoop(Node* head) {

    if(head == NULL) {
        return false;
    }

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL) {
        // cycle is present
        if(visited[temp] == true){
            cout<<"Present at -> "<<temp -> data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
}


//--- Approach 2 -> Floyd Loop Detection ---
// T.C -> O(n)
// S.C -> O(1)
Node* floydDetectLoop(Node* head) {

    if(head == NULL) {
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast) {
            cout<<"Node Present in Loop -> "<<slow -> data<<endl;
            return slow;
        }
    }
    return NULL;
}


//--- Starting Node of Loop ---
Node* getStartingNode(Node* head) {

    if(head == NULL) {
        return NULL;
    }

    Node* intersection = floydDetectLoop(head);
    Node* slow = head;

    while(slow != intersection) {
        slow = slow -> next;
        intersection = intersection -> next;
    }

    return slow;
}


//--- Remove Loop ---
// T.C -> O(n)
// S.C -> O(1)
void removeLoop(Node* head) {

    if(head == NULL) {
        return ;
    }

    Node* startOfLoop = getStartingNode(head);
    Node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    }

    temp -> next = NULL;
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

    tail -> next = head -> next;

    cout<<"Head -> "<<head -> data<<endl;
    cout<<"Tail -> "<<tail -> data<<endl;


    // if(isCircularList(tail)) {
    //     cout<<"Linked List is Circular"<<endl;
    // }
    // else {
    //     cout<<"Linked List is Not Circular"<<endl;
    // }

    if(floydDetectLoop(head) != NULL) {
        cout<<"Cycle is Present"<<endl;
    }
    else {
        cout<<"Cycle is not Present"<<endl;
    }


    Node* loop = getStartingNode(head);
    cout<<"Starting at -> "<<loop -> data<<endl;


    removeLoop(head);
    print(head);


    return 0;
}





//----- Q. Detect and Remove Loop -----

/*************************************************
    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

*************************************************/

// Node* floydDetectLoop(Node* head) {

//     if(head == NULL) {
//         return NULL;
//     }

//     Node* slow = head;
//     Node* fast = head;

//     while(slow != NULL && fast != NULL) {
//         fast = fast -> next;
//         if(fast != NULL) {
//             fast = fast -> next;
//         }

//         slow = slow -> next;

//         if(slow == fast) {
//             return slow;
//         }
//     }
//     return NULL;
// }

// Node* getStartingNode(Node* head) {

//     if(head == NULL) {
//         return NULL;
//     }

//     Node* intersection = floydDetectLoop(head);
    
//     if(intersection == NULL) {
//         return NULL;
//     }
    
//     Node* slow = head;

//     while(slow != intersection) {
//         slow = slow -> next;
//         intersection = intersection -> next;
//     }

//     return slow;
// }

// Node *removeLoop(Node *head)
// {
//     if(head == NULL) {
//         return NULL;
//     }

//     Node* startOfLoop = getStartingNode(head);
    
//     if(startOfLoop == NULL) {
//         return head;
//     }
    
//     Node* temp = startOfLoop;

//     while(temp -> next != startOfLoop) {
//         temp = temp -> next;
//     }

//     temp -> next = NULL;
    
//     return head;
// }