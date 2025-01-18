#include<stdio.h>

int main(){



int size[10];
int read,sum;
float avg;

for(int i=0;i<10;i++){
	printf("Enter Value: ");
	scanf("%d",&read);
	size[i]=read;
	sum =sum+size[i];
}
printf("\nn       %% of total\n");
for(int i=0;i<10;i++){
	
	avg = ((float)size[i]/sum)*100;
	printf("%2d %15.2f\n",size[i],avg);
}


}