#include <iostream>
using namespace std;

class Node {
    public:
        int data;
    Node * next;
};

void print_list(Node * n) {
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
    }
}

 //  Approach Number 1 


int getlen(Node*head){
    int temp = 0;
    while(head != NULL){
        head = head ->next;
        temp ++;
    }

    return temp;
}

Node*midnode(Node*head){
     
     int len = getlen(head);
     int mid = len/2;
     int i;

     for (i = 0 ; i<mid ; i++){
        head = head->next;
     }

     return head;

}


// Approach 2

int middle(Node*head){

    Node*slow = head;
    Node*fast = head->next;

    while (fast != NULL){
        fast = fast->next;

        if(fast-> next != NULL){

            fast = fast->next;
        }

        slow = slow->next;
    }

    return slow->data;

}

int main(){

    Node * head = NULL;
    Node * second = NULL;
    Node * third = NULL;
    Node* four = NULL;

    head = new Node();
    second = new Node();
    third = new Node();
    four = new Node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = four;
    
    four->data = 4;
    four->next = NULL;




//    cout<<getlen(head)<<endl;

// head = midnode(head);

  cout<<middle(head);


 


// print_list(head);

return 0;
}