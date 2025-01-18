#include<stdio.h>

int main(){

FILE * file;

file = fopen("infile.txt","r");

int a;
int count=0;
int values[5];

for(int i=0;i<5;i++){
	fscanf(file,"%d",&a);
	values[i]= a;
}

for(int i=0;i<5;i++){
	if((values[i]%2)==1){
		count =count +1;
		//printf("%d\n",values[i]);
	}else
		continue;
		
}
	
printf("%d odd numbers\n",count);

}
