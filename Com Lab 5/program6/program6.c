#include<stdio.h>
#include<math.h>

int main(){

int cube[10];
double square[10];



for(int i=1;i<=10;i++){
	cube[i]= (i*i*i);
	square[i] = sqrt(i);
	
}

for(int i=1;i<=10;i++){
	printf("%d\n",cube[i]);
	}

printf("\n");

for(int i=1;i<=10;i++){
	printf("%.2lf\n",square[i]);
	}


}