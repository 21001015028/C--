#include<iostream>
using namespace std;
int calsum(int mat[5][5]){
    int sum=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            sum=sum + mat[i][j];
            
        }
     }
     cout<<"sum of matrix"<<sum<<endl;
    return sum;
}
bool chk_star(int mat1[5][5]){
    int count4=0;
    int count1=0;
    for(int i=0;i<5;i++){
        int sum=0;
     for(int j=0;j<5;j++){
            sum=sum+mat1[i][j];
        }
        if(sum==4){
            count4++;
        }
        if(sum==1){
            count1++;
        }

    }
    if(count4==1 && count1==4){
        cout<<"star topology"<<endl;
        return 1;
    }
    else 
    cout<<"not known"<<endl; 
    return 0;

}

    bool chk_ring(int mat1[5][5]){
    int count2=0;
    
    for(int i=0;i<5;i++){
        int sum=0;
     for(int j=0;j<5;j++){
            sum=sum+mat1[i][j];
        }
        if(sum==2){
            count2++;
        }
        
   }
   if(count2==5){
    cout<<"ring topology"<<endl;
    return 1;

   }
   else
   cout<<"not ring"<<endl;
   return 0;       
}
    bool chk_mesh(int mat1[5][5]){
    int count4=0;
    for(int i=0;i<5;i++){
        int sum=0;
     for(int j=0;j<5;j++){
            sum=sum+mat1[i][j];
        }
        if(sum==4){
            count4++;
        }

    }
    if(count4==5){
        cout<<"mess topology"<<endl;
        return 1;
    }
     else
     cout<<"not known"<<endl;
     return 0;
    }
    
    
int main(){
int mat1[5][5];
//int mat2[5][5];
//int mat3[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cin>>mat1[i][j];
        }
    }
  /*  for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cin>>mat2[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
           cin>>mat3[i][j];
        }
    } */
    int sum1=calsum(mat1);
    //int sum2=calsum(mat2);
   // int sum3=calsum(mat3);
    switch(sum1){
        case 8:chk_star(mat1);
        break;
        case 10:chk_ring(mat1);
        break;
        case 20:chk_mesh(mat1);
        break;
    }
    return 0;
}