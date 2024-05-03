#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("test4.txt","r");
    fp2=fopen("test5.txt","w");
    while(1){
        ch=fgetc(fp1);  //read in file
        if(ch==EOF){
            break;
        }
        printf("%c",ch); //display
        fprintf(fp2,"%c",ch);  //write in file

         }
        fclose(fp1);
        fclose(fp2);
        return 0;
}