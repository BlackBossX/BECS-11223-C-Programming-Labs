#include <stdio.h>
#include <string.h>



int main(){

char string1[50];
char string2[50];

printf("Input the first string : ");
fgets(string1,sizeof(string1),stdin);

printf("Input the second string : ");
fgets(string2,sizeof(string2),stdin);

int x = strcmp(string1,string2);

if(x==0)
	printf("Strings are equal.");
else
	printf("Strings are not equal.");

}