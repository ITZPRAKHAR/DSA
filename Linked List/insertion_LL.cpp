#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d--->", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertbetween(struct node *head, int post, int data)
{
    int i;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    for (i = 1; i < post-1; i++)
    {
        p = p->next;
    }
    newnode->next = p->next;
    p->next = newnode;
    newnode->data = data;

    return head;
}

struct node *insertatfirst(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = head;
    head = newnode;
    newnode->data = data;
    return head;
}

struct node *insertatend(struct node *head, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;
    newnode->data = data;
    return head;
}

int main()
{
    struct node *head;
    struct node *two;
    struct node *three;
    struct node *four;

    head = (struct node *)malloc(sizeof(struct node));
    two = (struct node *)malloc(sizeof(struct node));
    three = (struct node *)malloc(sizeof(struct node));
    four = (struct node *)malloc(sizeof(struct node));

    head->data = 32;
    head->next = two;

    two->data = 45;
    two->next = three;

    three->data = 65;
    three->next = four;

    four->data = 85;
    four->next = NULL;

    //    head = insertbetween(head , 4 ,112);
    head = insertatfirst(head , 2);
    // head = insertatend(head , 99);

    traversal(head);

    return 0;
}
