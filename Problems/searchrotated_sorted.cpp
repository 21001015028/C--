#include<iostream>
using namespace std;

int getpivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
            
        }
        else{
            e=mid;
        }
       
        mid=s+(e-s)/2; 
    }
     return e;
}
int binarysearch(int arr[],int s,int e,int key){
    int mid=s+(e-s)/2;
while(s<=e){
if(arr[mid]==key){
    return mid;

}
if(key>arr[mid]){
    s=mid+1;

}
else{
    e=mid-1;
}
mid=s+(e-s)/2;
}
return -1;
}
int findposition(int arr[],int n,int k){
    int pivot=getpivot(arr,n);
    //2nd line --lower
    if(k>arr[pivot] && k<=arr[n-1]){
        return binarysearch(arr,pivot,n-1,k);
    }
    //1st line--upper
    else{
        return binarysearch(arr,0,pivot,k);
    }
}
int main(){
    int arr[5]={1,2,3,7,9};
    cout<<"pivotIndex is"<< getpivot(arr,5);
    cout<<"sorted and rotated"<<findposition(arr,5,2);


    return 0;
}