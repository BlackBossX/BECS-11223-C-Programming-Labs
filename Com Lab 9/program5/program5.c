#include <stdio.h>


int add();
int sub();
int multi();
int division();

//define total;

int main () {

int x,y;

char reading;

printf("Enter 'a' for Addition , 's' for Subtraction , 'm' for Multiplication , 'd' for Division\n");
scanf("%c",&reading);

printf("Enter No 1: ");
scanf("%d",&x);

printf("Enter No 2: ");
scanf("%d",&y);



switch (reading){

case 'a':
	add(x,y);
	break;
case 's':
	sub(x,y);
	break;
case 'm':
	multi(x,y);
	break;
case 'd':
	division(x,y);
	break;

}


}



int add(int p,int q){
	int total=0;
	total = p+q;
	printf("add: %d",total);
}

int sub(int p,int q){
	int total=0;
	total = p-q;
	printf("sub: %d",total);
}

int multi(int p,int q){
	int total=0;
	total = p*q;
	printf("multi: %d",total);
}

int division(int p,int q){
	float total=0;
	total = (float)p/q;
	printf("division: %.2f",total);
}


