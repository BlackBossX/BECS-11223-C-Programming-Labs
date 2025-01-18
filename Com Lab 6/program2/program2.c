#include<stdio.h>


int main(){

int x,y,z;

printf("Input first side: ");
scanf("%d",&x);
printf("Input second side: ");
scanf("%d",&y);
printf("Input third side: ");
scanf("%d",&z);


if((x==y)&&(x==z)){
printf("triangle is Equilateral");
}
else if ((x!= y) &&(x!= z)&& (y!=z)){
printf("triangle is Scalene");
}
else
printf("triangle is Isosceles");




}