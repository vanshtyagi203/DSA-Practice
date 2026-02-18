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

void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
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
        tail=temp;
    }
}

void insertAtMiddle(Node* &head,Node* &tail,int data,int position){
    //if inserting position is 1,ie inserting at head
    if(position==1){
        insertAtHead(head,data);
        return;
    }

    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //if inserting position is last,ie inserting at tail
    if(temp->next == nullptr){
        insertAtTail(head,tail,data);
        return;
    }

    Node* nodeInsert= new Node(data);
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
    cout<<"Printing nodes before inserting in middle = "<<endl;
    print(head);
    insertAtMiddle(head,tail,100,2);
    insertAtMiddle(head,tail,200,4);
    cout<<"Now Printing after inserting in middle = "<<endl;
    print(head);
    return 0;
}