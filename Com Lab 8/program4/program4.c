#include<stdio.h>
#include<string.h>

int main(){

FILE * file;

file = fopen("quote.txt","r");
char a[100];
char read_val;
int count,count2=0;

fscanf(file,"%[^\n] %*s",&a);

//fgets(a,100,stdin);

for (int i=0;i<strlen(a);i++){
   //printf("%c\n",a[i]);
   read_val = a[i];
    if(read_val=='i'||read_val=='I')
        count+=1;
    else
        continue;
    if(read_val=='i')
        count2 +=1;
    else
        continue;
}

printf("Total 'i' and 'I' is : %d\n",count);
printf("Total 'i' is : %d",count2);

}