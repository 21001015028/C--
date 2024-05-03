#include<iostream>
using namespace std;
/*int main(){
    int sum[10]={0};
    int count=0;
    int arr[4][4]={{1,5,8,9},{0,4,5,7},{0,1,4,8},{2,3,6,7}};
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            sum[arr[i][j]]++;
        }
    }
    for(int i=0;i<10;i++){
        if(sum[i]==1) 
        count++;
    }
    cout<<"efficiency"<<(1.0*count/16.0)*100<<endl;
    return 0;
}

*/
int main(){
    int sum[10]={0};
    int count=0;
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            sum[arr[i][j]]++;
        }
    }
    for(int i=0;i<10;i++){
        if(sum[i]==1) 
        count++;
    }
    cout<<"efficiency"<<(1.0*count/(n*m))*100<<endl;
    return 0;
}
