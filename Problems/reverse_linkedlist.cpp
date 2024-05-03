#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    public:
     Node(int data,Node*next ){
        this->data=data;
        this->next=NULL;
    }
};
Node reverse (Node* &head,Node* &curr,Node *prev){
     //base case
     if(curr==NULL){
        head=prev;
        return;
     }
     Node* forward=curr->next;
     reverse(head,forward,curr);
     curr->next=prev;


}
int main(){
     Node *node1=new Node();
    //cout<<node1->data;
    //cout<<node1->next; 

    Node *head=node1;


}