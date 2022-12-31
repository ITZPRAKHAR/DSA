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
    cout << p->data;
}

Node *delfirst(Node *head)
{
    Node *temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = head->next;
    free(head);
    head = temp->next;

    return head;
}

Node *dellast(Node *head)
{

    Node *current = head;
    Node *frwd = head->next;
    while (frwd->next != head)
    {
        frwd = frwd->next;
        current = current->next;
    }
    current->next = head;
    free(frwd);

    return head;
}

Node *delpost(Node *head, int post)
{

    Node *current = head;
    Node *frwd = head->next;
    int i;
    for (i = 1; i < post-1; i++)
    {

        frwd = frwd->next;
        current = current->next;
    }
    current->next = frwd->next;
    free(frwd);

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

    // head = delfirst(head);

    // head = dellast(head);

    head = delpost(head , 3);

    print_LL(head);

    return 0;
}