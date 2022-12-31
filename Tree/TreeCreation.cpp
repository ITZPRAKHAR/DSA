#include <iostream>
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
    cin>>data;

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


int main()
{
 Node*root = NULL;

 root = createTree(root);
    return 0;
}