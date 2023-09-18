#include <stdio.h>
#include <stdlib.h>
// node creation

struct node
{
    int data;
    struct node *next;
};

// LL traversal

void traverse(struct node *head)
{
    while (head != NULL)
    {
        printf("%d\n", head->data);
        head = head->next;
    }
}

// Insertion Functions

// At first Position

struct node *insertbeg(struct node *head, int d)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->next = head;
    head = newnode;
    newnode->data = d;
    return head;
}

// insert at last

struct node *insertlast(struct node *head, int d)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->data = d;
    newnode->next = NULL;

    return head;
}

// insert at between

struct node *insertbet(struct node *head, int post, int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    struct node *first = head;
    // struct node*sec = head->next;
    int i;
    for (i = 0; i < post - 2; i++)
    {
        first = first->next;
        // sec = sec->next;
    }
    newnode->next = first->next;
    first->next = newnode;
    newnode->data = data;

    return head;
}

// deletion in Linked List

struct node *delfirst(struct node *head)
{
    struct node *temp = head;

    head = head->next;

    free(temp);
    return head;
}

// deltion last

struct node *dellast(struct node *head)
{
    struct node *temp = head;
    struct node *ptr = head->next;

    while (ptr->next != NULL)
    {
        temp = temp->next;
        ptr = ptr->next;
    }

    temp->next = NULL;
    free(ptr);

    return head;
}


//deletion between 

struct node*delbet(struct node*head , int post){
    struct node *temp = head;
    struct node *ptr = head->next;
    
    int i;
    for (i = 0; i < post - 2; i++){
        temp = temp->next;
        ptr = ptr->next;
    }
    temp ->next = ptr->next;
    free(ptr);
    return head;

}


int main()
{

    struct node *head, *two, *three, *four;

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

    // head = insertbeg(head , 90);

    // head = insertbet(head , 2, 260);

    // head = delfirst(head);

    // head = dellast(head);

    head = delbet(head , 2);
    traverse(head);

    return 0;
}
