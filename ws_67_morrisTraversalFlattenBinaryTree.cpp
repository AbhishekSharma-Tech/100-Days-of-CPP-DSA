//----- Morris Traversal -----
// T.C -> O(n)
// S.C -> O(1)

// Algo:
//     current = root
//     while (root != NULL)
//         if left not exists
//             visit (current)
//             current = current -> right
//         else
//             predecessor = find(curr)
//             if (pred -> right == NULL)
//                 pred -> right = current
//                 current = current -> left
//             else
//                 pred -> right = NULL
//                 visit (current)
//                 current = current -> right





//----- Q. Flatten binary tree to linked list -----
// T.C -> O(n)
// S.C -> O(1)

// Algo:
//     current = root
//     while (curr != NULL) {
//         if curr -> left exists {
//             prev = curr -> left     // predecessor
//             while (prev -> right)   // predecessor
//                 prev -> right
//             prev -> right = curr -> right
//             curr -> right = curr -> left
//         }
//         curr = curr -> right
//     }



// class Solution
// {
//     public:
//     void flatten(Node *root)
//     {
//         Node* curr = root;
//         while (curr != NULL) {
            
//             if (curr -> left) {
//                 Node* pred = curr -> left;
                
//                 while (pred -> right) 
//                     pred = pred -> right;
                
//                 pred -> right = curr -> right;
//                 curr -> right = curr -> left;
//                 curr -> left = NULL;         // this line is an better alternative of line 66 - 70, for making left node NULL
//             }
//             curr = curr -> right;
//         }
        
//         // left part ko NULL
//         // curr = root;
//         // while (curr != NULL) {
//         //     curr -> left = NULL;
//         //     curr = curr -> right;
//         // }
//     }
// };