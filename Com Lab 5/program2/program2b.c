#include<stdio.h>

int main(){

int count=1;
int sum=0;

do{

sum=sum+count;
count =count+3;

printf("%d\n",sum);

}while(count<=30);



}