#include <stdio.h>
#include <string.h>



int main(){

char string1[50];
char string2[50];
char con[100];


printf("Input the first string : ");
fgets(string1,sizeof(string1),stdin);

printf("Input the second string : ");
fgets(string2,sizeof(string2),stdin);

    size_t len = strlen(string1);
    if (len > 0 && string1[len - 1] == '\n') {
        string1[len - 1] = '\0';
    }

	len = strlen(string2);
    if (len > 0 && string2[len - 1] == '\n') {
        string2[len - 1] = '\0';
    }

strcat(string1,string2);

printf("%s",string1);
}