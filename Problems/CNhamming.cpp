#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int chktopow(int m,int k){
    int i,p=0,f=1;
    for(i=0;i<k;i++){
        if(f==m)
        return 1;
        f=f*2;
    }
    return 0;
}
int xor1(int a,int b){
    if(a==b)
    return 0;
    return 1;
}
void display(int a[],int n){
    for(int i=1;i<=n;i++){
        cout<<a[i];
    }
    cout<<endl;
}
int main(){
    int data[10]={1,0,1,1,0,0,1,1,0,1};
    int data_index=0;
    int n,k,p;
    int code[20]={0};
    int i,j,pos,step;
    k=1;
    n=sizeof(data)/sizeof(int);
    while(pow(2,k)<n+k+1)
      k++;
    for(i=1;i<=n+k;i++){
        if(chktopow(i,k)==0){
            code[i]=data[data_index];
            data_index++;
        }
    }
    display(code,n+k);
    for(i=0;i<k;i++){
        step=pow(2,k);
        int start=step;
        int end=start+step-1;
        p=0;
        while(step<=n+k){
            for(j=start;j<=end && j<n+k;j++){
                p=xor1(p,code[j]);
            }
           start=start+2*step;
           end=end+2*step;
        }
        code[step]=p;

    }
    display(code,n+k);
    return 0;
    }