// Tree -> non-linear DS
// InOrder -> L N R (Left Node/Root Right)
// PreOrder -> N L R
// PostOrder -> L R N
// L -> left wale part me jao,  R -> Right wale part me jao,    N -> Print kra do

#include <iostream>
#include <queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;

    node (int d) {
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root) {

    cout<<"Enter the Data -> ";
    int data;
    cin>>data;
    root = new node(data);

    if (data == -1)
        return NULL;
    
    cout<<"Enter Data for inserting on Left -> "<<data<<endl;
    root -> left = buildTree (root -> left);
    cout<<"Enter Data for inserting on Right -> "<<data<<endl;
    root -> right = buildTree (root -> right);
    return root;

}

void levelOrderTraversal (node* root) {

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        if (temp == NULL) { // prev lvl completely traversed
            cout<<endl;
            if (!q.empty()) // queue still has some child node
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

void inorder (node* root) {

    // base case
    if (root == NULL)
        return ;

    inorder (root -> left);
    cout<< root -> data << " ";
    inorder (root -> right);

}

void preorder (node* root) {

    // base case
    if (root == NULL)
        return ;

    cout<< root -> data << " ";
    preorder (root -> left);
    preorder (root -> right);

}

void postorder (node* root) {

    // base case
    if (root == NULL)
        return ;

    postorder (root -> left);
    postorder (root -> right);
    cout<< root -> data << " ";

}

void buildFromLevelOrder (node* &root) {

    queue<node*> q;
    cout<<"Enter Root Data -> ";
    int data;
    cin>>data;
    root = new node(data);
    q.push (root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout<<"Enter left node for -> "<<temp -> data<<endl;
        int leftData;
        cin>>leftData;

        if (leftData != -1) {
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout<<"Enter left node for -> "<<temp -> data<<endl;
        int rightData;
        cin>>rightData;

        if (rightData != -1) {
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }

}


int main() {

    node* root = NULL;

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    buildFromLevelOrder (root);
    levelOrderTraversal (root);

    /*
    // creating a Tree
    root = buildTree (root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level order
    cout<<"Level Order Traversal O/P -> "<<endl;
    levelOrderTraversal (root);

    cout<<"InOrder Traversal -> ";
    inorder (root);
    cout<<endl;

    cout<<"PreOrder Traversal -> ";
    preorder (root);
    cout<<endl;

    cout<<"PostOrder Traversal -> ";
    postorder (root);
    cout<<endl;
    */

    return 0;
}









//---------- Q. Count Leaf Nodes ----------

/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/

// void inorder (BinaryTreeNode<int> *root, int &count) {

//     // base case
//     if (root == NULL)
//         return ;

//     inorder (root -> left, count);
    
//     //leaf node
//     if (root -> left == NULL && root -> right == NULL)
//         count++;
    
//     inorder (root -> right, count);

// }

// int noOfLeafNodes(BinaryTreeNode<int> *root){
//     int cnt = 0;
//     inorder (root, cnt);
//     return cnt;
// }