#include<iostream>
using namespace std;
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
        
    }
    cout<<"arr"<<endl;
}
void sortone(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
       // printarr(arr,n);
    while(arr[i]==0 &&i<j){
      i++;

    }
    while(arr[j]==1 && i<j){
        j--;
    }
    if(i<j){
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    }

}
int main(){
    
    int arr[6]={1,0,0,1,1,0};
    sortone(arr,6);
    printarr(arr,6);
    return 0;

}
