/*Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/




//----- Q. Construct Tree from Inorder & Preorder -----
// T.C -> O(n^2)

// class Solution{
//     public:
//     int findPosition(int in[], int element, int n) {
//         for(int i=0; i<n; i++) {
//             if (in[i] == element)
//                 return i;
//         }
//         return -1;
//     }
    
//     Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n) {
//         // base case
//         if (index >= n || inorderStart > inorderEnd)
//             return NULL;
            
//         int element = pre[index++];
//         Node* root = new Node(element);
//         int position = findPosition(in, element, n);
        
//         // recursive call
//         root -> left = solve(in, pre, index, inorderStart, position-1, n);
//         root -> right = solve(in, pre, index, position+1, inorderEnd, n);
        
//         return root;
//     }
    
//     Node* buildTree(int in[],int pre[], int n)
//     {
//         int preOrderIndex = 0;
//         Node* ans = solve(in, pre, preOrderIndex, 0, n-1, n);
//         return ans;
//     }
// };




//----- 2nd Approach (Using Mapping as S.C -> O(1) for position finding) -----
// T.C -> O(nlogn)

// class Solution{
//     public:
//     void createMapping(int in[], map<int, int> &nodeToIndex, int n) {
//         for(int i=0; i<n; i++) {
//             nodeToIndex[in[i]] = i;
//         }
//     }
    
//     Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex) {
//         // base case
//         if (index >= n || inorderStart > inorderEnd)
//             return NULL;
            
//         // create a root node for element
//         int element = pre[index++];
//         Node* root = new Node(element);
        
//         // find element's index in inorder
//         int position = nodeToIndex[element];
        
//         // recursive call
//         root -> left = solve(in, pre, index, inorderStart, position-1, n, nodeToIndex);
//         root -> right = solve(in, pre, index, position+1, inorderEnd, n, nodeToIndex);
        
//         return root;
//     }
    
//     Node* buildTree(int in[],int pre[], int n)
//     {
//         int preOrderIndex = 0;
//         map<int, int> nodeToIndex;
//         // create node to index map
//         createMapping(in, nodeToIndex, n);
        
//         Node* ans = solve(in, pre, preOrderIndex, 0, n-1, n, nodeToIndex);
//         return ans;
//     }
// };





//----- Q. Tree from Postorder and Inorder -----
// T.C -> O(nlogn)

// void createMapping(int in[], map<int, int> &nodeToIndex, int n) {
//     for(int i=0; i<n; i++) {
//         nodeToIndex[in[i]] = i;
//     }
// }

// Node* solve(int in[], int post[], int &index, int inorderStart, int inorderEnd, int n, map<int, int> &nodeToIndex) {
//     // base case
//     if (index < 0 || inorderStart > inorderEnd)
//         return NULL;
            
//     // create a root node for element
//     int element = post[index--];
//     Node* root = new Node(element);
        
//     // find element's index in inorder
//     int position = nodeToIndex[element];
        
//     // recursive call
//     root -> right = solve(in, post, index, position+1, inorderEnd, n, nodeToIndex);
//     root -> left = solve(in, post, index, inorderStart, position-1, n, nodeToIndex);
        
//     return root;
// }
    
// Node *buildTree(int in[], int post[], int n) {
//     int postOrderIndex = n-1;
//     map<int, int> nodeToIndex;

//     // create node to index map  [ O(nlogn) ]
//     createMapping(in, nodeToIndex, n);
        
        // [ O(n) ]
//     Node* ans = solve(in, post, postOrderIndex, 0, n-1, n, nodeToIndex);
//     return ans;
// }