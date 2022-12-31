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


    print_list(head);

    return 0;
}