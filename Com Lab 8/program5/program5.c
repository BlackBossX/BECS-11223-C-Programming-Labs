#include<stdio.h>
#include<string.h>


int main(){

FILE * file;

file = fopen("set.txt","r");
char a[200];




for(int i=0;i<3;i++){
    fscanf(file,"%[^\n]\n",&a);
    for (int j = 0; j < strlen(a); j++)
    {
        printf("%c ",a[j]);
    }
    printf("\n");

    for (int p = 0; p < 10; i++)
    {
        /* code */
    }
    

}






}