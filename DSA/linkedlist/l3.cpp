//revrsing k nodes
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    //constructor
    node(int val){
        data = val;
        next = NULL;
    }
};


void insertAtTail(node * &head, int val){
    node * n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next!= NULL)
    {
        temp = temp ->next;
    }
    
    temp ->next = n;
    
}

void insertAtHead(node* &head,int val){
    node * n = new node(val);
    n->next = head;
    head = n;    
}


//**  visualize

node * reverseKnodes(node * &head, int k){
    node * prevptr = NULL;
    node * currptr = head;
    node * nextptr;

    int count = 0;
    while (currptr != NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next= prevptr;

        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    

    if (nextptr!=NULL)
    {
        head->next=reverseKnodes(nextptr, k);
    }
    
    return prevptr; 

}

void display(node* head){
    node * temp = head;
    while (temp!= NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
        
    }
    cout<<"NULL";
}


int main(){
    node * head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    cout<<endl;

    //reversing k nodes
    int k = 3;
    display(reverseKnodes(head,k));

    return 0;
}