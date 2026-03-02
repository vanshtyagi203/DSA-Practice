#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data1,Node*next1,Node*prev1){
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
void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);

    if(head!=nullptr){
    temp->next=head;
    head->prev=temp;
    }
    head=temp;
}
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

void insertAtPosition(Node* &head,Node*&tail,int data,int position){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1 && temp!=nullptr){
        temp=temp->next;
        cnt++;
    }
    if(temp == nullptr){
    cout<<"Position out of range\n";
    return;
}

    if(temp->next==nullptr){
        insertAtTail(head,tail,data);
        return;
    }

    Node* nodeToInsert=new Node(data);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head=nullptr;
    Node* tail=nullptr;

    insertAtTail(head,tail,1);
    insertAtTail(head,tail,2);
    insertAtTail(head,tail,3);
    insertAtTail(head,tail,4);
    insertAtTail(head,tail,5);
    insertAtTail(head,tail,6);
    cout<<"Printing before inserting";
    print(head);

    insertAtPosition(head,tail,100,5);
    cout<<"Printing after inserting in middle"<<endl;;
    print(head);
    return 0;

}