#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};


void print_LL(Node*head){

    Node*p = head;
        
        while (p->next != head){
            cout<<p->data<<" ";
            p = p->next;
        } 
         cout<<p->data<<" ";       
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

    print_LL(head);

    return 0;
}
