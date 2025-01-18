#include<stdio.h>

int main(){

FILE * file;

char student_num[15];
char name[15];
int age;
char address[25];

file = fopen("output.txt","w");

printf("Enter your studentNo: ");
scanf("%s",&student_num);
fprintf(file,"%s\n",student_num);

printf("Enter your name: ");
scanf("%s",&name);
fprintf(file,"%s\n",name);

printf("Enter your age: ");
scanf("%d",&age);
fprintf(file,"%d\n",age);

printf("Enter your address: ");
scanf("%s",&address);
fprintf(file,"%s\n",address);

fclose(file);

}