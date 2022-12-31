#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void print_LL(Node *head)
{

    Node *p = head;

    while (p->next != head)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << " ";
}

Node *insertatbegin(Node *head, int data)
{

    Node *temp = head;
    Node *newnode = new Node();
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    newnode->data = data;
    head = newnode;

    return head;
}

Node *insertatlast(Node *head, int data)
{

    Node *temp = head;
    Node *newnode = new Node();
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    newnode->data = data;

    return head;
}

Node *insertatpost(Node *head, int data, int post)
{
    Node *temp = head;
    Node *newnode = new Node();
    int i;

    for (i = 1; i < post-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->data = data;

    return head;
}

int main()
{

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *four = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = four;

    four->data = 4;
    four->next = head;

    // head = insertatbegin(head, 50);
    // head = insertatlast(head, 70);
    head = insertatpost(head , 90 , 3);
    print_LL(head);

    return 0;
}
