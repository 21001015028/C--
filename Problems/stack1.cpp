#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    s.push(2);
    s.push(3);
    s.pop();
    cout<<"top element"<<s.top()<<endl;
    //empty stack pr not
    if(s.empty()){
        cout<<"stack is khali"<<endl;
    }
    else
    cout<<"stack is not empty"<<endl;

    //cout<<"size of stack"<<s.size()<<endl;
    
    return 0;
}