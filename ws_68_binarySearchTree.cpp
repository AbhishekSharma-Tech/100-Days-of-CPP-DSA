// T.C          Avg         Worst
// Insert       O(n)        O(n)
// Search       O(n)        O(n)   
// Delete       O(n)        O(n)

#include <iostream>
#include <queue>
using namespace std;

class Node {

    public:
        int data;
        Node* left;
        Node* right;

        Node (int d) {
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }

};

void levelOrderTraversal (Node* root) {

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if (temp == NULL) { // prev lvl completely traversed
            cout<<endl;
            if (!q.empty()) // queue still has some child Node
                q.push(NULL);
        }

        else {
            cout<< temp -> data << " ";
            if (temp -> left)
                q.push (temp -> left);

            if (temp -> right)
                q.push (temp -> right);
        }
    }
}

// Inorder (LNR) of BST is Sorted
void inorder (Node* root) {

    // base case
    if (root == NULL)
        return ;

    inorder (root -> left);
    cout<< root -> data << " ";
    inorder (root -> right);

}

void preorder (Node* root) {

    // base case
    if (root == NULL)
        return ;

    cout<< root -> data << " ";
    preorder (root -> left);
    preorder (root -> right);

}

void postorder (Node* root) {

    // base case
    if (root == NULL)
        return ;

    postorder (root -> left);
    postorder (root -> right);
    cout<< root -> data << " ";

}

// T.C -> O(logn)
Node* insertIntoBST(Node* &root, int d) {
    // base case
    if (root == NULL) {
        root = new Node(d);
        return root;
    }

    if (d > root -> data) {
        // right part me insert krna hai
        root -> right = insertIntoBST(root -> right, d);
    }
    else {
        // left part me insert krna hai
        root -> left = insertIntoBST(root -> left, d);
    }

    return root;
}

Node* minVal(Node* root) {
    Node* temp = root;

    while (temp -> left != NULL)
        temp = temp -> left;
    
    return temp;
}

Node* maxVal(Node* root) {
    Node* temp = root;

    while (temp -> right != NULL)
        temp = temp -> right;
    
    return temp;
}

Node* deleteFromBST(Node* root, int val) {
    // base case
    if (root == NULL)
        return root;

    if (root -> data == val) {
        // 0 child
        if (root -> left == NULL && root -> right == NULL) {
            delete root;
            return NULL;
        }

        // 1 child

        // only left child
        if (root -> left != NULL && root -> right == NULL) {
            Node* temp = root -> left;
            delete root;
            return temp;
        }

        // only right child
        if (root -> left == NULL && root -> right != NULL) {
            Node* temp = root -> right;
            delete root;
            return temp;
        }

        // 2 child
        if (root -> left != NULL && root -> right != NULL) {
            int mini = minVal(root -> right) -> data;
            root -> data = mini;
            root -> right = deleteFromBST(root -> right, mini);
            return root;
        }
    }
    else if (root -> data > val) {
        // left part me jao
        root -> left = deleteFromBST(root -> left, val);
        return root;
    }
    else {
        // right part me jao
        root -> right = deleteFromBST(root -> right, val);
        return root;
    }
}

void takeInput(Node* &root) {

    int data;
    cin>>data;

    while (data != -1) {
        insertIntoBST(root, data);
        cin>>data;
    }
}

int main() {

    Node* root = NULL;

    cout<<"Enter data to create BST: "<<endl;
    takeInput(root);

    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);

    cout<<"Printing Inorder: "<<endl;
    inorder(root);

    cout<<endl<<"Printing Preorder: "<<endl;
    preorder(root);

    cout<<endl<<"Printing Postorder: "<<endl;
    postorder(root);

    cout<<endl<<"Min Value: "<<minVal(root) -> data<<endl;
    cout<<"Max Value: "<<maxVal(root) -> data<<endl;

    // Deletion
    root = deleteFromBST(root, 30);
    cout<<"After Deletion BST: "<<endl;

    cout<<"Printing the BST: "<<endl;
    levelOrderTraversal(root);

    cout<<"Printing Inorder: "<<endl;
    inorder(root);

    cout<<endl<<"Printing Preorder: "<<endl;
    preorder(root);

    cout<<endl<<"Printing Postorder: "<<endl;
    postorder(root);

    cout<<endl<<"Min Value: "<<minVal(root) -> data<<endl;
    cout<<"Max Value: "<<maxVal(root) -> data<<endl;

    return 0;
}





//----- Q. Search In BST -----

//===== Recursive Approach =====

// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//     // base case
//     if (root == NULL)
//         return false;
    
//     if (root -> data == x)
//         return true;
    
//     if (root -> data > x) {
//         // left part me
//         return searchInBST(root -> left, x);
//     }
//     else {
//         // right part me
//         return searchInBST(root -> right, x);
//     }
// }




//===== Iterative Approach =====

// bool searchInBST(BinaryTreeNode<int> *root, int x) {
//     BinaryTreeNode<int> *temp = root;
    
//     while (temp != NULL) {
//         if (temp -> data == x)
//             return true;
//         if (temp -> data > x)
//             temp = temp -> left;
//         else
//             temp = temp -> right;
//     }
//     return false;
// }