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
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node*delfirst(struct node*head){
      struct node*temp  = head;
      head = head->next;
      free(temp);
      return head;

}
struct node*delpost(struct node*head , int post){
    int i;
       struct node *p = head;
       struct node*q = p->next;
       for(i=0;i<post-1;i++){
          p=p->next;
          q=q->next;
       }
       p->next=q->next;
       free(q);
       return head;
}

struct node*dellast(struct node*head){
      struct node*p = head;
      struct node*q = p->next;
      while(q->next !=NULL){
        p = p->next;
        q=q->next;

      }
      p->next = NULL;
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
    four->next=NULL;

    // head =delfirst(head);

    // head = delpost(head , 3);
    head = dellast(head);
    traversal(head);

     return 0;
}
