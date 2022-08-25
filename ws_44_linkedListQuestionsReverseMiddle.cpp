//----- Q. Reverse Linked List -----

// T.C -> O(n)  (For all 3 approach)
// S.C -> O(1)  (Approach 1),   O(n)    (Approach 2 & 3 - Recursive One)


/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


//--- Approach 1 ---

// #include <bits/stdc++.h> 

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     if(head == NULL || head -> next == NULL) {
//         return head;
//     }
    
//     LinkedListNode<int>* prev = NULL;            // Node*    as      LinkedListNode<int>* 
//     LinkedListNode<int>* curr = head;
//     LinkedListNode<int>* forward = NULL;
    
//     while(curr != NULL) {
//         forward = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
// }



//--- Approach 2 ---

// #include <bits/stdc++.h> 

// void reverse(LinkedListNode<int>* &head, LinkedListNode<int>* curr, LinkedListNode<int>* prev) {
    
//     // base case
//     if(curr == NULL) {
//         head = prev;
//         return ;
//     }
    
//     LinkedListNode<int>* forward = curr -> next;
//     reverse(head, forward, curr);
//     curr -> next = prev;
// }

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
    
//     LinkedListNode<int>* curr = head;
//     LinkedListNode<int>* prev = NULL;
//     reverse(head, curr, prev);
//     return head;
    
// }



//--- Approach 3 ---

// #include <bits/stdc++.h> 

// LinkedListNode<int>* reversel(LinkedListNode<int>* head) {
    
//     // base case
//     if(head == NULL || head -> next == NULL) {
//         return head;
//     }
    
//     LinkedListNode<int>* chotaHead = reversel(head -> next);
    
//     head -> next -> next = head;
//     head -> next = NULL;
    
//     return chotaHead;
// }

// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
    
//     return reversel(head);
    
// }





//----- Middle of Linked List -----

// T.C -> O(n) + O(n/2) = O(n)

/****************************************************************

    Following is the class structure of the Node class:

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


//--- Approach 1 ---

// #include <bits/stdc++.h> 

// int getLength(Node* head) {
//     int len = 0;
//     while(head != NULL) {
//         len++;
//         head = head -> next;
//     }
//     return len;
// }

// Node *findMiddle(Node *head) {
//     int len = getLength(head);
//     int ans = (len/2) ;
    
//     Node* temp = head;
//     int cnt = 0;
//     while(cnt < ans) {
//         temp = temp -> next;
//         cnt++;
//     }
    
//     return temp;
// }



//--- Approach 2 ---

// #include <bits/stdc++.h> 

// Node* getMiddle(Node* head) {
//     // base case
//     if(head == NULL || head -> next == NULL) {
//         return head;
//     }

//     // 2 Nodes in LL - Not mandatory
//     if(head -> next -> next == NULL) {
//         return head -> next;
//     }
    
//     Node* slow = head;
//     Node* fast = head -> next;
    
//     while(fast != NULL) {
//         fast = fast -> next;
//         if(fast != NULL) {
//             fast = fast -> next;
//         }
//         slow = slow -> next;
//     }
//     return slow;
// }


// int getLength(Node* head) {
//     int len = 0;
//     while(head != NULL) {
//         len++;
//         head = head -> next;
//     }
//     return len;
// }

// Node *findMiddle(Node *head) {
    
//     return getMiddle(head);
    
// }