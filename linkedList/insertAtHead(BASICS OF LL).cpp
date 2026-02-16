//Insert at head and printing the Linked List

#include <bits/stdc++.h>
using namespace std;

//     Each node contains:
//     1) data  -> actual value stored
//     2) next  -> pointer to the next node
class Node{
    public:
    int data;    // Stores value
    Node*next;   // Stores address of next node
    
    // Constructor when both data and next pointer are given
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }

    // Constructor when only data is given
    // By default next = nullptr (node is last)
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

/*
    insertAtHead()
    ----------------
    Inserts a new node at the beginning of the linked list.

    Why Node*& head ?
    -> Because we want to MODIFY the original head.
    -> If we don't use &, head won't change outside the function.
*/

void insertAtHead(Node* &head,int data){
    Node *temp=new Node(data); //create a new node
    temp->next=head; //new node points to current head
    head=temp; //move head to new node
}

/*
    print()
    --------
    Traverses and prints the linked list.

    Traversal logic:
    Start from head
    Move using temp = temp->next
    Stop when temp becomes nullptr
*/

void print(Node* &head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main() {
    
    Node * head=NULL;
    
    print(head);
    cout<<"Now we are inserting at Head = "<<endl;
    insertAtHead(head,10);
    insertAtHead(head,11);
    print(head);
    

    return 0;
}