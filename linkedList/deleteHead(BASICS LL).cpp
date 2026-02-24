#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int data1,Node*next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

void deleteHeadNode(Node* &head,Node* &tail){
    //checking whether Linked List is empty or not
    if(head==nullptr){
        return;
    }

    Node* temp=head;
    head=head->next;
    
    //if list become empty after deleting node then manage tail also
    if(head==nullptr){
       tail=nullptr;
    }

    delete temp;
    
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
    insertAtTail(head,tail,5);
    cout<<"Printing before deleting = ";
    print(head);
    cout<<endl;

    deleteHeadNode(head,tail);
    cout<<"Printing after deleting head = ";
    print(head);
    return 0;
}