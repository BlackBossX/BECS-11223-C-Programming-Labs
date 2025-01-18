#include<stdio.h>


int main(){

int x;
int total=0;

printf("Enter a positive no less than 1000: ");
scanf("%d",&x);

if(x>0 && x<1000){
while(x)
{
	total = total+(x % 10);
    int p =x /= 10;


}
printf("Sum of the digits of 546 is %d",total);
}
else
printf("Entered number is out of range");


}