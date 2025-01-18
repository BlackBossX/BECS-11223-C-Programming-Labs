#include<stdio.h>


int main(){

int h;
printf("Enter your total credit hours earned:");
scanf("%d",&h);

if (h<=30 && h>0)
    printf("You are a First - Year Student.");

else if(h<=60 && h>30)
    printf("You are a Second - Year Student.");

else if(h<=90 && h>60)
    printf("You are a Third - Year Student.");
else if(h>90)
    printf("You are a Fourth - Year Student.");
else
    printf("Invalid input.");
}












