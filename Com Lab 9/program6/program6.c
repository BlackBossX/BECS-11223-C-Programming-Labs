#include <stdio.h>

int fac();

int main () {
int x;

printf("Enter No: ");
scanf("%d",&x);

fac(x);
}



int fac(int p){
	int total=1;
	for(int i=1;i<=p;i++){
		total = total*i;
	}
	printf("Total is: %d",total);


}