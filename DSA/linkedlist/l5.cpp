//append last ka node to start of linkedlist

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
void display(node * head){
    node * temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" <=> ";
        temp = temp->next;
    }
    cout<<"NULL";
}



int length(node * head){
    node * temp = head;
    int count = 0;
    while (temp!=NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

node *  kappend(node* &head, int k){
    node * newhead;
    node * newtail;
    node * tail = head;

    int l = length(head);


    k = k%l;  //if sombody gives value of k greater than l
    int count = 1;
    while ((tail->next!=NULL))
    {
        if (count==l-k)
        {
            newtail = tail;
        }
        if (count ==l-k+1)
        {
            newhead = tail;
        }
        tail= tail->next;
        count++;
        
        
    }

    newtail->next =NULL;
    tail->next = head;
    return newhead;
    
}