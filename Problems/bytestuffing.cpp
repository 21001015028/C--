#include<iostream>
using namespace std;
int main(){
    char data[20]="HELLO FARMERS";
    char code[30];
    char decode[30];
    int i;
    int j=0;
    int k;
    int n;
    cout<<"data is"<<data<<endl;
    n=sizeof(data)/sizeof(char);
    for(int i=0;i<n;i++){
        if(data[i]=='E' || data[i]=='F'){
            code[j]='E';
            j++;
        }
        code[j]=data[i];
        j++;   
     }
        code[j]='\0';
        cout<<"code is"<<code<<endl;

  //at reciever
  i=0;
  for(int k=0;k<j;k++){
    if(code[k]=='E'){
        k++;
    }
    decode[i]='\0';
    decode[i]=code[k];
    i++;
  }
  cout<<"decode is"<<decode<<endl;
  return 0;
}