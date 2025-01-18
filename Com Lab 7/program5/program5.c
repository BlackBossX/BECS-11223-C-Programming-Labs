#include<stdio.h>

int main(){

float score[10] = {1.2, 0.9, 0.8, 1.3, 1.4, 1.2, 1.8, 2.2, 2.7, 2.1};
float zscore[10];
float sum;

int size=10;

for(int i=0;i<10;i++){
	zscore[i]=score[i];
	sum =sum+zscore[i];
}

/*
for(int i=0;i<10;i++){
	printf("%.1f\n",zscore[i]);
}

*/

printf("TOTAL IS: %.1f\n",sum);
}