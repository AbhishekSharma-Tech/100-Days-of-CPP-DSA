/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/




//----- Q. Validate BST -----
// T.C -> O(n)
// S.C -> O(H)

// bool isBST(BinaryTreeNode<int>* root, int min, int max) {
//     // base case
//     if (root == NULL)
//         return true;
    
//     if (root -> data > min && root -> data < max) {
//         bool left = isBST(root -> left, min, root -> data);
//         bool right = isBST(root -> right, root -> data, max);
//         return left && right;
//     }
//     else
//         return false;
// }

// bool validateBST(BinaryTreeNode<int>* root) 
// {
//     return isBST(root, INT_MIN, INT_MAX);
// }





//----- Q. Find K-th smallest Element in BST -----
// T.C -> O(n)
// S.C -> O(H)

// int solve(BinaryTreeNode<int>* root, int& i, int k) {
//     // base case
//     if (root == NULL)
//         return -1;
    
//     int left = solve(root -> left, i, k);
    
//     if (left != -1)
//         return left;
    
//     // N
//     i++;
//     if (i == k)
//         return root -> data;
    
//     // R
//     return solve(root -> right, i, k);
// }

// int kthSmallest(BinaryTreeNode<int>* root, int k) {
//     int i = 0;
//     int ans = solve(root, i, k);
//     return ans;
// }





//----- Q. Predecessor And Successor In BST -----
// T.C -> O(n)
// S.C -> O(1)

// pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
// {
//     // find key
//     BinaryTreeNode<int>* temp = root;
//     int pred = -1;
//     int succ = -1;
    
//     while (temp -> data != key) {
//         if (temp -> data > key) {
//             succ = temp -> data;
//             temp = temp -> left;
//         }
//         else {
//             pred = temp -> data;
//             temp = temp -> right;
//         }
//     }
    
//     // pred
//     BinaryTreeNode<int>* leftTree = temp -> left;
//     while (leftTree != NULL) {
//         pred = leftTree -> data;
//         leftTree = leftTree -> right;
//     }
    
//     // succ
//     BinaryTreeNode<int>* rightTree = temp -> right;
//     while (rightTree != NULL) {
//         succ = rightTree -> data;
//         rightTree = rightTree -> left;
//     }
    
//     pair<int, int> ans = make_pair(pred, succ);
//     return ans;
// }





//----- Q. LCA of Two Nodes In A BST -----

//===== Recursive Approach =====
// T.C -> O(n)
// S.C -> O(H)

// TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
// {
//     // base case
//     if (root == NULL)
//         return NULL;
    
//     if (root -> data < P -> data && root -> data < Q -> data)
//         return LCAinaBST(root -> right, P, Q);
    
//     if (root -> data > P -> data && root -> data > Q -> data)
//         return LCAinaBST(root -> left, P, Q);
    
//     return root;
// }





//===== Iterative Approach =====
// T.C -> O(n)
// S.C -> O(1)

// TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
// {
//     while (root != NULL) {
//         if (root -> data < P -> data && root -> data < Q -> data)
//             root = root -> right;
//         else if (root -> data > P -> data && root -> data > Q -> data)
//             root = root -> left;
//         else
//             return root;
//     }
// }