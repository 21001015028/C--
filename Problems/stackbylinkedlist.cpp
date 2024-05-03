#include <iostream>
using namespace std;

class node{

public:

int data;
node *next;

node (int data){

  this->data=data;
  next=NULL;
}
};
class stack{
public:
node *head;
int size;
stack(int size){
    this->size=size;
    this->head=NULL;
}

//for following LIFO principle, we will insert the elements in the beginning
void push(int data){

  //creating a node
  node *newNode=new node(data);
  
  if(head==NULL){
    head=newNode;
    cout<<data<<" pushed successfully."<<endl;
    return ;
  }

  newNode->next=head;
  head=newNode;
  cout<<data<<" pushed successfully."<<endl;
  
}

void pop(){

  if(head==NULL){
    cout<<"Stack is empty.Pop operation not possible."<<endl;
    return;
  }

  node *temp=head;
  head=temp->next;
  temp->next=NULL;
  delete temp;
  cout<<"Pop operation got successfull."<<endl;
  
}

void top(){

  if(head==NULL){
    cout<<"Stack is empty."<<endl;
    return;
  }

  node *temp=head;
  cout<<"Top most element in stack is:"<<temp->data<<endl;
}

int size(){

  int length=0;
  node *temp=head;

  while(temp!=NULL){
    length++;
    temp=temp->next;
  }

  return length;  
}

bool isEmpty(){

  if(head==NULL){
    return 1;
  }

  return 0;
}



int main(){

 stack s(5);
  s.push(2);
  push(4);
  push(7);
  push(12);
  push(14);
  push(74);
  top();
  
  cout<<"Size of stack is:"<<size()<<endl;
  pop();
  pop();

  top();
  cout<<"Size of stack is:"<<size()<<endl;
  pop();
  pop();
  pop();
  pop();
  cout<<"Empty:"<<isEmpty()<<endl; 
  
}
};

