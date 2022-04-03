//linkedlist
//non-contiguousmwm. insertiob and deletion is easy

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

//3. searching in linkedlist
int searchingInLinkedlist(node * &head, int key){
node * temp = head;
int counter = 1;
while (temp !=NULL)
{
    if (temp->data == key)
    {
        return counter;
    }
    temp = temp->next;
    counter++;
    
}
return 0;

}

//4. deletion in linkedlist
void deleteNode(node *head, int val){
    //check for corner case
    if(head==NULL){
        return;
    }
    //check for single node corner case
    if (head->next==NULL)
    {
        deleteAtHead(head);
    }
    
    node * temp = head;
    while (temp->next->data!=val)
    {
        temp = temp->next;
    }
    node * toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;
}
void deleteAtHead(node * &head){
    if(head==NULL){
        return;
    }
    node * todelete = head;
    head = head ->next;
    delete todelete;

}


//Driver function
int main(){

    //1. insert at tail
    node * head= NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 3);
    insertAtTail(head, 2);
    insertAtTail(head, 4);
    display(head);
    cout<<endl;

    //2. insert at head
    insertAtHead(head, 5);
    display(head);
    cout<<endl;

    //3. searching
    //you can also use bool
    int ans = searchingInLinkedlist(head, 3);
    if (ans!=0)
    {
        cout<<"element found at position "<<ans;
    }
    else
    {
        cout<<"element not found";
    }
    cout<<endl;
    
    //4. deletion
    deleteNode(head, 2);
    display(head);
    cout <<endl;

    deleteAtHead(head);
    display(head);
    cout<<endl;

    return 0;

}