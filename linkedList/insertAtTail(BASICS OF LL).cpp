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

/*
  Insert a new node at the end of the linkedList
  Two cases:
  1)If list is empty ,then first node is head and tail both that's why,
        head=temp
        tail=temp
   
   2)If list is not empty means it has some nodes then,
        tail->next=temp
        tail=temp     
*/
void insertAtTail(Node*& head,Node*& tail,int data){
    Node* temp=new Node(data);

    if(head==nullptr){
        head=temp;
        tail=temp;
    }
    else{
     tail->next=temp;//attach new node at end
     tail=temp; // move tail forward
    }
}

void print(Node* head){
    Node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    Node* tail=nullptr;
    Node* head=nullptr;
    
    insertAtTail(head,tail,10);
    insertAtTail(head,tail,11);
    print(head);
    
    return 0;
}