#include<stdio.h>
#include<ctype.h>

int main(){

float a,b;
printf("Enter two real values to be swapped: ");
scanf("%f %f",&a,&b);

printf("Values entered are a=%f and b=%f\n",a,b);
float ex;
ex =a;
a=b;
b=ex;
printf("Values after swap are a=%f and b=%f\n",a,b);




}


