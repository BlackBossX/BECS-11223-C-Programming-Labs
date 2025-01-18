#include<stdio.h>

int main(){


long long int sum=1;

for(int i=5;i<=50;i+=5){


sum *=i;
printf("%lld\n",sum);
}

printf("Total is : %lld\n",sum);

}