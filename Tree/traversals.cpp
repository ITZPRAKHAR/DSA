#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int key;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->key = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createTree(Node *root)
{
    int data;
    cout << "Enter the data" << endl;
    cin >> data;

    root = new Node(data);

    if (data == -1)
    {
        return NULL;
    }

    cout << "Enter the data in the left of " << data << endl;

    root->left = createTree(root->left);

    cout << "Enter the data in the right of " << data << endl;
    root->right = createTree(root->right);
    return root;
}

void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    inorder(root->left);
    cout << root->key << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->key << " ";

    preorder(root->left);
    preorder(root->right);
}

void postorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->key << " ";
}
int main()
{
    Node *root = NULL;

    root = createTree(root);

    // 1 3 -1 -1 4 -1 -1

    cout << "inorder traversl" << endl;

    inorder(root);
    cout << endl;

    cout << "preorder traversal" << endl;

    preorder(root);
    cout << endl;

    cout << "postorder traversl" << endl;

    postorder(root);

    return 0;
}