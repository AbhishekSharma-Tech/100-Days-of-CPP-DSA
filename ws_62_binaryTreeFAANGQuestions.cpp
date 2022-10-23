/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


//----- Q. Height of Binary Tree -----
// T.C -> O(n)
// S.C -> O(height)

// class Solution{
//     public:
//     //Function to find the height of a binary tree.
//     int height(struct Node* node){
//         // base case
//         if (node == NULL)
//             return 0;
            
//         int left = height (node -> left);
//         int right = height (node -> right);
        
//         int ans = max (left, right) + 1;
//         return ans;
//     }
// };





//----- Q. Diameter of a Binary Tree -----
// T.C -> O(n^2)

// class Solution {
//   private:
//     int height (struct Node* node) {
//         // base case
//         if (node == NULL)
//             return 0;
        
//         int left = height (node -> left);
//         int right = height (node -> right);
        
//         int ans = max (left, right) + 1;
//         return ans;
//     }
    
//   public:
//     // Function to return the diameter of a Binary Tree.
//     int diameter(Node* root) {
//         // base case
//         if (root == NULL)
//             return 0;
            
//         int op1 = diameter (root -> left);
//         int op2 = diameter (root -> right);
//         int op3 = height (root -> left) + height (root -> right) + 1;
        
//         int ans = max (op1, max (op2, op3));
//         return ans;
//     }
// };




//===== Approach 2nd =====
// T.C -> O(n)

// class Solution {
//   public:
//     // Function to return the diameter of a Binary Tree.
    
//     pair <int, int> diameterFast (Node* root) {
//         // base case
//         if (root == NULL) {
//             pair<int, int> p = make_pair (0, 0);
//             return p;
//         }
        
//         pair<int, int> left = diameterFast (root -> left);
//         pair<int, int> right = diameterFast (root -> right);
        
//         int op1 = left.first;
//         int op2 = right.first;
//         int op3 = left.second + right.second + 1;
        
//         pair<int, int> ans;
//         ans.first = max (op1, max (op2, op3));
//         ans.second = max (left.second, right.second) + 1;

//         return ans;
//     }
    
//     int diameter(Node* root) {
//         return diameterFast(root).first;
//     }
// };





//----- Q. Check for Balanced Tree -----
// T.C -> O(n^2)

// class Solution{
//     private:
//     int height(struct Node* node){
//         // base case
//         if (node == NULL)
//             return 0;
            
//         int left = height (node -> left);
//         int right = height (node -> right);
        
//         int ans = max (left, right) + 1;
//         return ans;
//     }
    
//     public:
//     //Function to check whether a binary tree is balanced or not.
//     bool isBalanced(Node *root)
//     {
//         //  base case
//         if (root == NULL)
//             return true;
            
//         bool left = isBalanced (root -> left);
//         bool right = isBalanced (root -> right);
        
//         bool diff = abs (height(root -> left) - height(root -> right)) <= 1;
        
//         if (left && right && diff)
//             return true;
//         else
//             return false;
//     }
// };



//===== Approach 2nd =====
// T.C -> O(n)

// class Solution{
//     public:
//     //Function to check whether a binary tree is balanced or not.
//     pair<bool, int> isBalancedFast (Node* root) {
//         //  base case
//         if (root == NULL) {
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }
        
//         pair<int, int> left = isBalancedFast (root -> left);
//         pair<int, int> right = isBalancedFast (root -> right);
            
//         bool leftAns = left.first;
//         bool rightAns = right.first;
        
//         bool diff = abs (left.second - right.second) <= 1;
        
//         pair<bool, int> ans;
//         ans.second = max (left.second, right.second) + 1;
        
//         if (leftAns && rightAns && diff)
//             ans.first = true;
//         else
//             ans.first = false;
            
//         return ans;
//     }
    
//     bool isBalanced(Node *root)
//     {
//         return isBalancedFast(root).first;
//     }
// };





//----- Q. Determine if Two Trees are Identical -----
// T.C -> O(n)

// class Solution
// {
//     public:
//     //Function to check if two trees are identical.
//     bool isIdentical(Node *r1, Node *r2)
//     {
//         //base case
//         if (r1 == NULL && r2 == NULL)
//             return true;
        
//         if (r1 == NULL && r2 != NULL)
//             return false;
            
//         if (r1 != NULL && r2 == NULL)
//             return false;
            
//         bool left = isIdentical (r1 -> left, r2 -> left);
//         bool right = isIdentical (r1 -> right, r2 -> right);
        
//         bool value = r1 -> data == r2 -> data;
        
//         if (left && right && value)
//             return true;
//         else
//             return false;
//     }
// };





//----- Q. Sum Tree -----
// T.C -> O(n)
// S.C -> O(H)      H -> Height

// class Solution
// {
//     public:
//     pair<bool, int> isSumTreeFast (Node* root) {
//         // base case
//         if (root == NULL) {
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }
        
//         if (root -> left == NULL && root -> right == NULL) {
//             pair<bool, int> p = make_pair (true, root -> data);
//             return p;
//         }
        
//         pair<bool, int> leftAns = isSumTreeFast (root -> left);
//         pair<bool, int> rightAns = isSumTreeFast (root -> right);
        
//         bool isLeftSumTree = leftAns.first;
//         bool isRightSumTree = rightAns.first;
        
//         int leftSum = leftAns.second;
//         int rightSum = rightAns.second;
        
//         bool condn = root -> data == (leftSum + rightSum);
        
//         pair<bool, int> ans;
        
//         if (isLeftSumTree && isRightSumTree && condn) {
//             ans.first = true;
//             ans.second = root -> data + leftSum + rightSum;
//         }
//         else {
//             ans.first = false;
//         }
        
//         return ans;
//     }
    
//     bool isSumTree(Node* root)
//     {
//          return isSumTreeFast(root).first;
//     }
// };

//====================

// class Solution
// {
//     public:
//     pair<bool, int> isSumTreeFast (Node* root) {
//         // base case
//         if (root == NULL) {
//             pair<bool, int> p = make_pair(true, 0);
//             return p;
//         }
        
//         if (root -> left == NULL && root -> right == NULL) {
//             pair<bool, int> p = make_pair (true, root -> data);
//             return p;
//         }
        
//         pair<bool, int> leftAns = isSumTreeFast (root -> left);
//         pair<bool, int> rightAns = isSumTreeFast (root -> right);
        
//         bool left = leftAns.first;
//         bool right = rightAns.first;
        
//         bool condn = root -> data == (leftAns.second + rightAns.second);
        
//         pair<bool, int> ans;
        
//         if (left && right && condn) {
//             ans.first = true;
//             ans.second = 2 * root -> data;
//         }
//         else {
//             ans.first = false;
//         }
        
//         return ans;
//     }
    
//     bool isSumTree(Node* root)
//     {
//          return isSumTreeFast(root).first;
//     }
// };