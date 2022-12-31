#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node*head ){
    struct node*p = head;
    while(p->next!=head){
        printf("Element : %d\n" , p->data);
        p = p->next;
        
    }
     printf("Element : %d\n" , p->data);

}

struct node*insertatbegin(struct node*head , int data){
       struct node*newnode = (struct node*)malloc(sizeof(struct node));
       
       struct node*p = head;
       while (p->next!=head)
       {
        p = p->next;
       }
       p->next=newnode;
       newnode->next=head;
       head = newnode;
       
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

    four->data=85;
    four->next=head;

    head = insertatbegin(head , 99);
    traversal(head);
     return 0;
}