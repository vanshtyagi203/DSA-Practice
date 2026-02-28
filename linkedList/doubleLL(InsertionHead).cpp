#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1,Node* next1,Node* prev1){
        data=data1;
        next=next1;
        prev=prev1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
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
 void print(Node* head){
    Node* temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
 }

int main(){
    Node* head=nullptr;
    
    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    print(head);

    return 0;
}