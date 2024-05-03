#include<iostream>
using namespace std;
int printdigits(string arr[],int n){
    if(n==0){
        return -1;
    }
    int digit=n%10;
     n=n/10;
    printdigits(arr,n);
    cout<<arr[n]<<endl;
    cout<<arr[digit]<<endl; 
    
}
int main(){
    int n=412;
    string arr[50]={"one","two","three","four","five","six","seven","eight","nine","ten"};
    cout<<"digit is"<<printdigits(arr,412)<<endl;
}