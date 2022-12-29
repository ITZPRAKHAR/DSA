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

void LeveOrderTraversal(Node *root)
{
    queue<Node *> q;

    q.push(root);

    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        cout << curr->key << " ";

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

int main()
{
    Node *root = NULL;

    root = createTree(root);

    // 1 3 -1 -1 4 -1 -1

    cout << "Level Order traversal" << endl;

    LeveOrderTraversal(root);
    return 0;
}