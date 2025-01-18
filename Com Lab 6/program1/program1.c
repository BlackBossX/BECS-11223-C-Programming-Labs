#include<stdio.h>

int main(){

char r_value;
printf("Enter your character: ");
scanf("%c",&r_value);

if(r_value >=97 && r_value <=103){
	r_value = r_value - 32;
	printf("Output is: %c",r_value);
}
else{
	printf("Output is: X");
}







}