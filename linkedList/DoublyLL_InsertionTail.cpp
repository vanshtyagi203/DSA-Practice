#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data1,Node* prev1,Node* next1){
        data=data1;
        prev=prev1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        prev=nullptr;
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
        temp->prev=tail;
        tail=temp;
    }
}

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
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
    print(head);

    return 0;
}