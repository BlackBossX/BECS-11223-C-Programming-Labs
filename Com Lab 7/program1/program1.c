#include<stdio.h>

int main(){

int x,q;
int sum=0;



do{

q = 2*x+1;

x=x+1;
printf("%d\n",q);
sum =sum+q;


}while(x<30);
printf("Sum is: %d",sum);



}