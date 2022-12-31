#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;
};

void print_list(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

Node *insertbeg(Node *head, int data)
{

    Node *newnode = new Node();

    newnode->data = data;
    newnode->next = head;
    head->prev = newnode;
    head = newnode;

    return head;
}

Node *insertlast(Node *head, int data)
{

    Node *temp;
    temp = head;
    Node *newnode = new Node();

    while (temp->next != NULL)
    {

        temp = temp->next;
    }

    newnode->prev = temp;
    temp->next = newnode;
    newnode->data = data;
    newnode->next = NULL;

    return head;
}

Node *insertpost(Node *head, int data, int post)
{

    Node *temp;
    temp = head;
    Node *newnode = new Node();

    int i;
    for (i = 1; i < post - 1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;

    temp->next->prev = newnode;
    newnode->prev = temp;
    temp->next = newnode;

    newnode->data = data;

    return head;
}

int main()
{

    Node *head = NULL;
    Node *second = NULL;
    Node *third = NULL;
    Node *four = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    four = new Node();

    head->data = 8;
    head->next = second;
    head->prev = NULL;

    second->data = 3;
    second->next = third;
    second->prev = head;

    third->data = 2;
    third->next = four;
    third->prev = second;

    four->data = 5;
    four->next = NULL;
    four->prev = third;

    //    head = insertbeg(head , 45);

    //  head = insertlast(head , 98);

    head = insertpost(head, 108, 3);

    print_list(head);

    return 0;
}