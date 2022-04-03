//reversing the linkedlist
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node * next;

    node(int val){
         data = val;
         next = NULL;
    }
};

//1. insert at tail
void insertAtTail(node * &head, int val){
    node * n = new node(val);

    //corner case
    if (head==NULL)
    {
        head = n;
        return;
    }
    
    node * temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
    
}

void display(node * head){
    //no change so call by value
    node * temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//2. insert at head
void insertAtHead(node * &head, int val){
    node * n = new node(val);

    n->next = head;
    head = n;
}


//iterative way
node * ReversingLinkedList(node * &head){
    node * previousptr= NULL;
    node * currentptr = head;
    node * nextptr;

    while (currentptr!=NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = previousptr;

        previousptr = currentptr;
        currentptr = nextptr;
    }
    return previousptr;
}

//recursive call**
node * reverseRecursiove(node * &head){
    
    if (head ==NULL || head->next == NULL)
    {
        return head;
    }
    
    
    node * newhead = reverseRecursiove(head->next);
    head->next->next= head;
    head->next = NULL;

    return newhead;
}

int main(){
    node * head = NULL;
    insertAtHead(head,1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    cout<<endl;

    //revrsing a linkedlist
    cout<<"reversed linkedlist: ";
    node * newhead = reverseRecursiove(head);
    display(newhead);

    return 0;
}