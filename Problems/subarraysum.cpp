#include<iostream>
#include<limits>
#include"bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int curr;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            curr=0;
            for(int j=i;j<n;j++){
                curr=curr+arr[j]; 
                cout<<curr<<endl;
                maxi=max(maxi,curr);
                
               
            }
        }
        cout<<"max sum"<<maxi<<endl; 
        return 0; 
}