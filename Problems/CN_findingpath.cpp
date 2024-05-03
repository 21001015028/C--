#include<iostream>
using namespace std;
void display(int mat[5][5]){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
void mul(int mat1[5][5],int mat2[5][5]){
    int mat3[5][5]={0};
    //valid multiplication bcz matrix is 5*5
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            for(int k=0;k<5;k++){
                mat3[i][j]+=mat1[i][k]*mat2[k][j];
            }
        }
    }

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            mat1[i][j]=mat3[i][j];
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
void mat_sum(int S[5][5],int mat1[5][5]){
    int i,j;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            S[i][j]=S[i][j]+mat1[i][j];
        }
    }
    cout<<S[i][j]<<endl;
}
int main(){
  int S[5][5]={0};
  int U[5][5]={{0,1,0,1,1},
                {1,0,1,0,1},
                {0,1,0,0,0},
                {1,0,1,0,0},
                {0,0,1,1,0}};
 int I[5][5]={{1,0,0,0,0},
              {0,1,0,0,0},
              {0,0,1,0,0},
              {0,0,0,1,0},
              {0,0,0,0,1}};
    int i,j,k;
    //display(U);

    for(i=1;i<=5;i++){
        mul(I,U);
       mat_sum(S,I);
    }  
   display(I);
    display(S);
int P[5][5];
for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        if(S[i][j]==0){
            P[i][j]=0;
        }
        else
           P[i][j]=1;
    }
}
display(P);
return 0;
}