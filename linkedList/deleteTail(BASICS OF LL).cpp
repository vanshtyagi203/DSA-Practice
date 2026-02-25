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

void deleteTail(Node* &head,Node* &tail){
      if(head==nullptr ){ //head==null means List is empty so return 
        return;
      }
      else if(head->next==nullptr){ // head->next==nullptr means list has one node so after deleting,point the head and tail to nullptr as list became empty
          delete head;
          head=nullptr;
          tail=nullptr;
          return;
      }

      Node* temp=head;
      while(temp->next!=tail){  //traversing till we found second last node as we need to delete last node
        temp=temp->next;
      }
      delete temp->next; // deleting last node
      tail=temp;         //managing tail after deleting last node
      temp->next=nullptr;  //explicitly pointing temp->next as nullptr;
       
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
    cout<<"Printing before deleting tail node = ";
    print(head);
    cout<<endl;
    deleteTail(head,tail);
    cout<<"Printing after deleting tail node = ";
    print(head);

    return 0;

}