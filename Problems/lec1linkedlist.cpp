#include<iostream>
using namespace std;
class Node{
public:
 int data;
 Node *next;
 //constructor  -this helps in give argument to the object
Node(int data){
    this->data=data;
    this->next=NULL;
}
};
//singly linked list
void insertathead(int d,Node * &head){
    //create a node
    Node *temp=new Node(d);
    temp->next=head;
    head=temp;
}
void insertattail(int d,Node * &tail){
    Node * temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
//insert at any position
void insertatposition(int pos,int d,Node * &head,Node * &tail){
     
}
void print(Node * &head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}



int main(){
 Node *node1=new Node(2);
 cout<< node1->data<<endl;
 cout<< node1->next<<endl;
 Node *head=node1;
 insertathead(11,head);
 print(head);
 //Node *tail=node1; or
 insertattail(22,head);
print(head);
 return 0;
}
