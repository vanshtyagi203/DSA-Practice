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

void deleteHead(Node* &head,Node* &tail){
      if(head==nullptr){
        return;
      }
      Node* temp=head;
      head=head->next;

      if(head==nullptr){
        tail=nullptr;
      }
      delete temp;
}

void deleteMiddle(Node* &head,Node* &tail,int position){
    if(head==nullptr){
        return;  //checking whether LL is empty or has some nodes
    }

    if(position==1){
        deleteHead(head,tail);
        return;
    }

     Node* temp=head;   //temp will point to the previous node of the node to be deleted
    int cnt=1;
    while(cnt<position-1 && temp->next!=nullptr){ //traversing in Linked List and temp->next != nullptr ensures we don't traverse beyond Linked list length.
        temp=temp->next; 
        cnt++;
    }

    if(temp->next==nullptr){  //if position exceeds this will prevent crash
        cout<<"Invalid position";
        return;
    }

    Node* nodeDelete=temp->next; // deleting
    temp->next=nodeDelete->next;

    if(nodeDelete==tail){  // If the node to be deleted is the last node
        tail=temp;
    }
    delete nodeDelete;

}

void deleteTail(Node* &head,Node* &tail){
    if(head==nullptr){
        return;
    }
    else if(head->next==nullptr){
        delete head;
        head=nullptr;
        tail=nullptr;
        return;
    }

    Node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    delete temp->next;
    tail=temp;
    temp->next=nullptr;
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
    cout<<"Printing before deleting = ";
    print(head);
    cout<<"Printing after deleting = ";
    deleteMiddle(head,tail,4);
    print(head);
    
    return 0;
}
