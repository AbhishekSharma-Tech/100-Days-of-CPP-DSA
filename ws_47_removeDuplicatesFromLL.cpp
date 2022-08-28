//----- Q. Remove Duplicates From Sorted List -----
// T.C -> O(n)
// S.C -> O(1)

/************************************************************

    Following is the linked list node structure.
    
    class Node 
    {
        public:
        int data;
        Node* next;

        Node(int data) 
        {
            this->data = data;
            this->next = NULL;
        }
    };
    
************************************************************/

// Node * uniqueSortedList(Node * head) {
//     // empty list
//     if(head == NULL) {
//         return NULL;
//     }
    
//     // non empty list
//     Node* curr = head;
    
//     while(curr != NULL) {
//         if( (curr -> next != NULL) && (curr -> data == curr -> next -> data) ) {
//            Node*  next_next = curr -> next -> next;
//            Node* nodeToDelete = curr -> next;
//            delete(nodeToDelete);
//            curr -> next = next_next;
//         }
//         else {
//             // not equal
//             curr = curr -> next;
//         }
//     }
    
//     return head;
// }





//----- Remove Duplicates From an Unsorted Linked List -----
// Aproach 1 -> Two loops (T.c -> O(n^2),   S.c -> O(1))
// Aproach 2 -> Sort then remove (T.c -> O(n logn),   S.c -> O(1))
// Aproach 3 -> Using Map (T.c -> O(n),   S.c -> O(n))