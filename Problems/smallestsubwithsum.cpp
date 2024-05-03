#include<iostream>
using namespace std;
int smallestsubsum(int arr[],int n,int x){
    int min_len=n+1;
    for(int i=0;i<n;i++){
        int sum=arr[i];
        if(sum>=x){
            return 1;
        }
        for(int j=i;j<n;j++){
            sum=sum+arr[j];

           if(sum>x && min_len>j-i){
               min_len=j-i;
           }
        }
        return min_len;
    }
    
}
int main(){
  
  
    int x;
    cin>>x;
    cout<<"x is"<<x<<endl;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i];
    }
    int ans=smallestsubsum(arr,n,x);
    cout<<"ans is"<<ans<<endl;
    return 0;
}