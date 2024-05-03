#include<iostream>
using namespace std;

int xor1(int a,int b){
    if(a==b){
        return 0;
    }
    else 
    return 1;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=xor1(a,b);
    cout<<ans<<endl;
    return 0; 
    
}
