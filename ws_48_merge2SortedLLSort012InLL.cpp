//----- Q. Sort linked list of 0s 1s 2s -----

//--- Approach 1 -> Using Map ---
// T.C -> O(n) + O(n) = O(n)
// S.C -> O(1)

/********************************
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

********************************/

// Node* sortList(Node *head)
// {
//     // Write your code here.
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;
    
//     Node* temp = head;
//     while(temp != NULL) {
//         if(temp -> data == 0)
//             zeroCount++;
//         else if(temp -> data == 1)
//             oneCount++;
//         else if(temp -> data == 2)
//             twoCount++;
        
//         temp = temp -> next;
//     }
    
//     temp = head;
//     while(temp != NULL) {
//         if(zeroCount != 0) {
//             temp -> data = 0;
//             zeroCount--;
//         }
//         else if(oneCount != 0) {
//             temp -> data = 1;
//             oneCount--;
//         }
//         else if(twoCount != 0) {
//             temp -> data = 2;
//             twoCount--;
//         }
        
//         temp = temp -> next;
//     }
    
//     return head;
// }





//--- Approach 2 -> Create sublist of 0, 1 & 2s and then merge them ---     (No change in data, change in links)
// T.C -> O(n) + O(1) + O(1) + O(1) = O(n)
// S.C -> O(1)

// void insertAtTail(Node* &tail, Node* curr) {
//     tail -> next = curr;
//     tail = curr;
// }


// Node* sortList(Node *head)
// {
    
//     Node* zeroHead = new Node(-1);
//     Node* zeroTail = zeroHead;
//     Node* oneHead = new Node(-1);
//     Node* oneTail = oneHead;
//     Node* twoHead = new Node(-1);
//     Node* twoTail = twoHead;
    
//     Node* curr = head;
    
//     // create separate list 0s, 1s & 2s
//     while(curr != NULL) {
//         int value = curr -> data;
        
//         if(value == 0) {
//             insertAtTail(zeroTail, curr);
//         }
//         else if(value == 1) {
//             insertAtTail(oneTail, curr);
//         }
//         else if(value == 2) {
//             insertAtTail(twoTail, curr);
//         }
//         curr = curr -> next;
//     }
    
//     // merge 3 sublist
    
//     // 2s list not empty
//     if(oneHead -> next != NULL) {
//         zeroTail -> next = oneHead -> next;
//     }
//     else {
//         // 1s list -> empty
//         zeroTail -> next = twoHead -> next;
//     }
//     oneTail -> next = twoHead -> next;
//     twoTail -> next = NULL;
    
//     // setup head
//     head = zeroHead -> next;
    
//     // delete dummy nodes
//     delete zeroHead;
//     delete oneHead;
//     delete twoHead;
    
//     return head;   
// }





//----- Q. Merge Two Sorted Linked Lists -----


/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/


// #include <bits/stdc++.h> 

// Node<int>* solve(Node<int>* first, Node<int>* second) {
    
//     // if only one element is present in first list
//     if(first -> next == NULL) {
//         first -> next = second;
//         return first;
//     }
    
//     Node<int>* curr1 = first;
//     Node<int>* next1 = curr1 -> next;
//     Node<int>* curr2 = second;
//     Node<int>* next2 = curr2 -> next;
    
//     while(next1 != NULL && curr2 != NULL) {
        
//         if( (curr2 -> data >= curr1 -> data) && (curr2 -> data <= next1 -> data) ) {
            
//             // add node in-between the 1st list
//             curr1 -> next = curr2;
//             next2 = curr2 -> next;
//             curr2 -> next = next1;
            
//             // update pointers
//             curr1 = curr2;
//             curr2 = next2;
//         }
//         else {
//             // go one step ahead in first list
//             curr1 = next1;        //is same curr1 = curr1 -> next;
//             next1 = next1 -> next;
            
//             if(next1 == NULL) {
//                 curr1 -> next = curr2;
//                 return first;
//             }
//         }
//     }
//     return first;
// }


// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     if(first == NULL) 
//         return second;
    
//     if(second == NULL)
//         return first;
    
//     if(first -> data <= second -> data) {
//         return solve(first, second);
//     }
//     else {
//         return solve(second, first);
//     }
// }
