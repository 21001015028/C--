#include<iostream>
using namespace std;
class Node{
    public:

    int data;
    Node * next;
    
     Node(int data){
        this->data=data;
        this->next=NULL;
     }
};
    //insert at head
    void insertathead(Node* &head,int d){
          Node*temp=new Node(d);
          temp->next=head;
          head=temp;
    }
    void print(Node* &head){
         if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
        Node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        
      }
        cout<<endl;
    }
    //insert at tail
    void insertattail(Node * &tail,int d){
        Node*temp=new Node(d);
        tail->next=temp;
        tail=tail->next;
    }
    //insert at a position
    void insertatposition(Node * &head,Node* &tail,int position,int d){
        Node *temp=head;
        if(position==1){
            insertathead(head,d);
            return;
        }
        int count=1;
        while(count<position){
            temp=temp->next;
            count++;
 
        }
      

        if(temp->next==NULL)
        {
         insertattail(tail,d);
         return;
        }
        Node*insertatnode=new Node(d);
        insertatnode->next=temp->next;
        temp->next=insertatnode;
    }

     


int main(){
     Node *node1=new Node(3);

    Node *head=node1; 
    //cout<<node1->data;
    //cout<<node1->next;
    Node *tail=node1;
    
    insertathead(head,5);
   // print(head);
    insertattail(tail,6);
    print(head);

    insertatposition(head,tail,1,9);
    print(head);
    
    return 0;

}