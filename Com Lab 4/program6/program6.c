#include<stdio.h>
int main(){

int x = 10;
int y = 20;
int z = 30;

int a = x++ + 10;
int b = --x - x--;
int c = ++x - ++y - ++z;
int d = ++y * ++y;

printf("a is:%d\n",a);
printf("b is:%d\n",b);
printf("c is:%d\n",c);
printf("d is:%d\n",d);




}