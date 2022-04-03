//circular linkedlist

#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node * next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtHead(node * &head, int val){
    node * n = new node(val);
    node * temp = head;

    if (head==NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    

    while (temp->next != head)
    {
        temp = temp ->next;
    }
    temp ->next = n;
    n->next = head;
    head = n;
}

void insertAtTial(node * &head, int val){
     

    if (head ==NULL)
    {
        insertAtHead(head,val);
        return;
    }
    node* n = new node(val);
    node * temp = head;

    while (temp->next != head)
    {
        temp  = temp ->next;
    }
    temp ->next = n;
    n->next = head;
    
}


void display(node * head){
    node * temp = head;
    do
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    } while (temp!=head);
    cout<<endl; 
}

void deleteAtHead(node * &head){
    node * temp = head;
    while (temp->next!= head)
    {
        temp = temp ->next;
    }
    
    node * todelete = head;
    temp->next = head->next;
    head = head -> next;

    delete todelete;
}

void deletion(node *&head, int pos){

    //corner case
    if (pos ==1 )
    {
        deleteAtHead(head);
        return;
    }
    

    node * temp = head;
    int count = 1;

    while (count != pos-1)
    {
        temp = temp->next;
        count++;
    }
    
    node * todelete =  temp->next;
    temp->next = temp->next->next;

    delete todelete;
}


int main(){

    node * head = NULL;
    insertAtHead(head,1);
    insertAtTial(head,2);
    insertAtTial(head,3);
    insertAtTial(head,4);
    insertAtTial(head,5);
    display(head);
    cout<<endl;
    deleteAtHead(head);
    display(head);
    cout<<endl;
    deletion(head, 3);
    display(head);
    cout<<endl;

    return 0;
}