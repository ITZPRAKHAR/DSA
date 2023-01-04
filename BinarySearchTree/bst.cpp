#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }

};

void LeveOrderTraversal(Node *root)
{
    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->data << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }

        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
}

// Node*insertIntoBST(Node*root , int d){
//     if(root == NULL){
//         root = new Node(d);
//         return root;
//     }
//     if(d > root->data ){
//         root->right = insertIntoBST(root->right,d);
//     }
//     else{
//         root->left = insertIntoBST(root->left,d);
//     }
// }



Node*BSTcreate(Node*root , int d){
    if(!root ){
        return new Node(d);
    }
    else if (d > root->data)
    {
        BSTcreate(root->right, d);
    }
    else{
        BSTcreate(root->left , d);
    }

    
}

void takeinput(Node*root){
    int data;
    cin>>data;
    while(data != -1){
        root = BSTcreate(root , data);
        cin>>data;
    }
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main(){

    Node*ccd = NULL;
    cout<<"Enter data to create bst "<<endl;

    takeinput(ccd);
    cout<<"Printing BST "<<endl;
    LeveOrderTraversal(ccd);
    // inorder(root);

return 0;
}