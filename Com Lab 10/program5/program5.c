#include <stdio.h>
#include <string.h>



int main(){

char string[50];

printf("Input the string : ");
fgets(string,sizeof(string),stdin);

printf("The string you entered is : %s",string);

}