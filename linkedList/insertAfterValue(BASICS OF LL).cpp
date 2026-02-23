#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

void insertAtTail(Node* &head,Node* &tail,int data){
    Node* temp=new Node(data);
    if(head==nullptr){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
}

void insertAfterVal(Node* &head,Node* &tail,int data,int val){
    //if LL is empty
    if(head==nullptr){
        cout<<"Linked List is empty";
        return;
    }

    Node* temp=head;
    while(temp!=nullptr && temp->data!=val){ //traversing linked list
        temp=temp->next;
    }
    
    if(temp==nullptr){            //if temp gets equal to nullptr that means values is not present in linked list
        cout<<"Value does not exist";
        return;
    }

    if(temp->next == nullptr){   //if val is at last so insert at tail
         insertAtTail(head,tail,data);
         return;
    }

    Node* nodeInsert=new Node(data); //inserting node after value
    nodeInsert->next=temp->next;
    temp->next=nodeInsert;
} 

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;

    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,4);
    insertAtTail(head,tail,5);
    insertAfterVal(head,tail,100,5);
    print(head);
    
    return 0;
}