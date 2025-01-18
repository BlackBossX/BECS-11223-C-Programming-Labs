#include<stdio.h>

int main(){

int val;
float p;
char q;

FILE * file;

file = fopen("input.txt","r");

fscanf(file,"%d %f %c",&val,&p,&q);


fclose(file);

printf("Int value: %d\n",val);
printf("float value: %.2f\n",p);
printf("Char value: %c\n",q);

}