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

Node *delfirst(Node *head)
{

    Node *temp = head;
    head->next->prev = NULL;
    head = head->next;
    free(temp);

    return head;
}

Node *dellast(Node *head)
{

    Node *temp = head;

    while (temp->next != NULL)
    {

        temp = temp->next;
    }
    temp->prev->next = NULL;
    free(temp);

    return head;
}

Node *delpost(Node *head, int post)
{

    Node *current = head;
    Node *frwd = head->next;
    int i;

    for (i = 1; i < post - 1; i++)
    {

        current = current->next;
        frwd = frwd->next;
    }

    current->next = frwd->next;
    frwd->next->prev = current;

    free(frwd);

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

    // head = delfirst(head);

    // head = dellast(head);

    head = delpost(head, 3);

    print_list(head);

    return 0;
}
