#include <stdio.h>

int doubled();

int main(){

int x,y,z;

printf("Enter No1: ");
scanf("%d",&x);

printf("Enter No2: ");
scanf("%d",&y);

printf("Enter No3: ");
scanf("%d",&z);

doubled(&x,&y,&z);

printf("Entered no 1 now: %d\n",x);
printf("Entered no 2 now: %d\n",y);
printf("Entered no 3 now: %d\n",z);

}



int doubled(int *p,int *q,int *r){

*p = *p*2;
*q = *q*2;
*r = *r*2;



}