#include<stdio.h>

int main(){

FILE * file;

file = fopen("numbers.txt","r");
int a,sum,max,mix,temp;
int values[10];

for(int i=0;i<10;i++){
	fscanf(file,"%d",&a);
	values[i]= a;
	sum+= values[i];
}
max= values[0];
for(int i=0;i<10;i++){
	if(values[i]>max)
		max =values[i];
	else
		continue;
}

printf("Total is: %d\n",sum);
printf("MAX is: %d",max);

}