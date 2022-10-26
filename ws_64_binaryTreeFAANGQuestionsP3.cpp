/*
structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/




//----- Q. Sum of the Longest Bloodline of a Tree (Sum of nodes on the longest path from root to leaf node) -----
// T.C -> O(n)
// S.C -> O(H)

// class Solution
// {
// public:

//     void solve (Node* root, int sum, int &maxSum, int len, int &maxLen) {
//         // base case
//         if (root == NULL) {
//             if (len > maxLen) {
//                 maxLen = len;
//                 maxSum = sum;
//             }
//             else if (len == maxLen) {
//                 maxSum = max(sum, maxSum);
//             }
//             return ;
//         }
        
//         sum = sum + root -> data;
        
//         solve(root -> left, sum, maxSum, len+1, maxLen);
//         solve(root -> right, sum, maxSum, len+1, maxLen);
//     }
    
//     int sumOfLongRootToLeafPath(Node *root)
//     {
//         int len = 0;
//         int maxLen = 0;
        
//         int sum = 0;
//         int maxSum = INT_MIN;
        
//         solve(root, sum, maxSum, len, maxLen);
        
//         return maxSum;
//     }
// };





//----- Q. Lowest Common Ancestor in a Binary Tree -----
// T.C -> O(n)
// S.C -> O(H)

// class Solution
// {
//     public:
//     //Function to return the lowest common ancestor in a Binary Tree.
//     Node* lca(Node* root ,int n1 ,int n2 )
//     {
//         // base case
//         if (root == NULL)
//             return NULL;
            
//         if (root -> data == n1 || root -> data == n2)
//             return root;
            
//         Node* leftAns = lca(root -> left, n1, n2);
//         Node* rightAns = lca(root -> right, n1, n2);
        
//         if (leftAns != NULL && rightAns != NULL)
//             return root;
//         else if (leftAns != NULL && rightAns == NULL)
//             return leftAns;
//         else if (leftAns == NULL && rightAns != NULL)
//             return rightAns;
//         else 
//             return NULL;
//     }
// };





//----- Q. K Sum Paths -----
// T.C -> O(n)
// S.C -> O(H)

// class Solution{
//   public:
//     void solve(Node* root, int k, int &count, vector<int> path) {
//         // base case
//         if (root == NULL)
//             return ;
        
//         path.push_back(root -> data);
        
//         // left
//         solve(root -> left, k, count, path);
//         // right
//         solve(root -> right, k, count, path);
        
//         // check for k sum
//         int size = path.size();
//         int sum = 0;
//         for (int i=size-1; i>=0; i--) {
//             sum += path[i];
//             if (sum == k)
//                 count++;
//         }
        
//         path.pop_back();
//     }
  
//     int sumK(Node *root,int k)
//     {
//         vector<int> path;
//         int count = 0;
//         solve(root, k, count, path);
//         return count;
//     }
// };





//----- Q. Kth Ancestor in a Tree -----
// T.C -> O(n)
// S.C -> O(H)

// Node* solve(Node* root, int &k, int node) {
//     // base case
//     if (root == NULL)
//         return NULL;
    
//     if (root -> data == node)
//         return root;
        
//     Node* leftAns = solve(root -> left, k, node);
//     Node* rightAns = solve(root -> right, k, node);
    
//     // on returning
//     if (leftAns != NULL && rightAns == NULL) {
//         k--;
//         if (k <= 0) {
//             // answer lock
//             k = INT_MAX;
//             return root;
//         }
//         return leftAns;
//     }
    
//     if (leftAns == NULL && rightAns != NULL) {
//         k--;
//         if (k <= 0) {
//             // answer lock
//             k = INT_MAX;
//             return root;
//         }
//         return rightAns;
//     }
//     return NULL;
// }

// int kthAncestor(Node *root, int k, int node)
// {
//     Node* ans = solve(root, k, node);
//     if (ans == NULL || ans -> data == node)
//         return -1;
//     else
//         return ans -> data;
// }





//----- Q. Maximum sum of Non-adjacent nodes -----
// T.C -> O(n)
// S.C -> O(H)

// class Solution{
//   public:
//     //Function to return the maximum sum of non-adjacent nodes.
//     pair<int, int> solve(Node* root) {
//         // base case
//         if (root == NULL) {
//             pair<int, int> p = make_pair(0, 0);
//             return p;
//         }
        
//         pair<int, int> left = solve(root -> left);
//         pair<int, int> right = solve(root -> right);
        
//         pair<int, int> res;
        
//         res.first = root -> data + left.second + right.second;
        
//         res.second = max(left.first, left.second) + max(right.first, right.second);
        
//         return res;
//     }
    
//     int getMaxSum(Node *root) 
//     {
//         pair<int, int> ans = solve(root);
//         return max(ans.first, ans.second);
//     }
// };