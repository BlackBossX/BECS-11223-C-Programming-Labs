#include<stdio.h>

int main(){

int count=1;
int sum=0;

do{

sum=sum+count;
count =count+3;



}while(count<=30);

printf("SUM is: %d\n",sum);

}