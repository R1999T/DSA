//to find the intersection point in linkedlist

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};


void insertAtHead(node * &head, int val){
    node * n = new node(val);
    n->next = head;
    head = n;
    
}

void insertAtTail(node * &head, int val){
    node * n = new node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }

    node * temp = head;
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }

    temp->next = n;

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

int length(node * head){
    int l = 0;
    node * temp = head;

    while (temp!=NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}


//intersect two nodes
void intersect(node * &head1, node * &head2, int position){
    node * temp1 = head1;
    position--;
    while (position--)
    {
        temp1 = temp1->next;
    }

    node * temp2 = head2;
    while (temp2->next !=NULL)
    {
        temp2= temp2->next;
    }

    temp2->next = temp1;
}

//to find intersection point between two nodes
int intersection(node* &head1, node * &head2){
    int l1 = length(head1);
    int l2 = length(head2);

    int d =0;
    node* ptr1;
    node* ptr2;

    if (l1>l2)
    {
        d = l1-l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2-l1;
        ptr1= head2;
        ptr2 = head1;
    }
    
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--; 
    }
    
    while (ptr1!= NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    
    return -1;
}




//driver function
int main(){

    node * head1 = NULL;
    insertAtHead(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,9);
    insertAtTail(head1,7);
    display(head1);

    cout<<endl;

    node * head2 = NULL;
    insertAtHead(head2, 4);
    insertAtTail(head2, 5);
    insertAtTail(head2, 6);
    insertAtTail(head2, 10);
    insertAtTail(head2, 11);
    insertAtTail(head2, 12);
    insertAtTail(head2, 13);

    //intersect
    intersect(head2, head1, 4);

    //intersection
    int data = intersection(head1, head2);

    cout<<"linkedlist in intersecting at: "<<data;

    return 0;
}