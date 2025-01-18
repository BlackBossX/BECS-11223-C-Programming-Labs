#include<stdio.h>

int main(){

int count=0;
int sum=0;

do{

sum=sum+count;
count =count+1;

}while(count<10);


printf("SUM is: %d\n",sum);


}