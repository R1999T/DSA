//doubly linkedlist
//we can move back and forth in linkedlist
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;
    node * prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node * n = new node(val);
    n->next = head;
    if (head!=NULL)
    {
        head->prev = n;
    }
    
    head = n;
}

void insertAtTail(node * &head, int val){
    node * n = new node(val);
    if (head== NULL)
    {
        insertAtHead(head, val);
    }

    node * temp =head;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
    
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

void deleteAtHead(node * & head){
    node * todelete = head;
    head = head->next;
    head->prev = NULL;

    delete todelete;
}


void deleteAtNode(node * &head, int pos){

    if (pos==1)
    {
        deleteAtHead(head);
        return;
    }
    

    node * temp = head;
    int count=1;
    while (temp !=NULL && count!= pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;

    //corner case
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    
    

    delete temp;

}

//driver function

int main(){
    node * head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    display(head);
    cout<<endl;

    deleteAtHead(head);
    display(head);
    cout<<endl;

    deleteAtNode(head, 3);
    display(head);
    cout<<endl;

    return 0;
}