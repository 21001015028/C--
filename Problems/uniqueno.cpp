#include<iostream>
using namespace std;
int unique(int arr[],int  n){
  //  int ans=0;
  int ans;
    for(int i=0;i<n;i++){
         ans=ans^arr[i];   
   }
        
   return ans;
}
int main(){
    int arr[4]={1,2,2,1};
int a=unique(arr,4);
cout<<a<<endl;
return 0;
}