#include<stdio.h>

int main(){

int count=5;
int sum=0;

for(int i=1;i<=10;i++){

count=count*i;
sum =sum+count;
printf("%d\n",count);
count=5;
}

printf("Total is : %d\n",sum);

}