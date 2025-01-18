#include <stdio.h>

int get_val();
int main () {

int x;

printf("Enter No: ");
scanf("%d",&x);

get_val(x);

}


int get_val(int p){

int y=0;
while(p)
{
	
    printf("%d\n", p % 10);
	y = p % 10;
    	p /= 10;
}
printf("First Digit is: %d",y);
}