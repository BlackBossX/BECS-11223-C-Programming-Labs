#include <stdio.h>


int larget_no();

int main () {

int x,y,z;


printf("Enter No 1: ");
scanf("%d",&x);

printf("Enter No 2: ");
scanf("%d",&y);

printf("Enter No 3: ");
scanf("%d",&z);

larget_no(x,y,z);
}


int larget_no(int p,int q,int r){
	
	if(p>q){

	if(p>r)
		printf("Largest is: %d",p);
	else
		printf("Largest is: %d",r);
	}else{
	if(q>r)
		printf("Largest is: %d",q);
	else
		printf("Largest is: %d",r);
}
}