#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main(){
    FILE *p1,*p2,*p3;
    char buffer;
    int p=3;
    int x=7;
    int y=11;
    int g=5;
    int tk1=(int)(pow(p,x))%g;
   int  tk2=(int)(pow(p,y))%g;
   int k1=(int)(pow(tk2,x))%g;
   int k2=(int)(pow(tk1,y))%g;
   //encryption
   p1=fopen("test1.txt","r");
   p2=fopen("test2.txt","w");
   buffer=fgetc(p1);
   while(buffer != EOF){
    fprintf(p2,"%c",buffer+k1);
    printf("%c",buffer);
    printf("%c",buffer+k1);
    buffer=fgetc(p1);
   }
   fclose(p1);
   fclose(p2);

  //Decryption
   p2=fopen("test2.txt","r");
   p3=fopen("test3.txt","w");
   buffer=fgetc(p2);
   while(buffer != EOF){
    fprintf(p3,"%c",buffer-k1);
    printf("%c",buffer-k1);
    buffer=fgetc(p2);
   }
   fclose(p2);
   fclose(p3);
return 0;
}