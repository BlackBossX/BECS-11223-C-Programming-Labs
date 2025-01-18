#include <stdio.h>
#include <string.h>



int main(){

char string[50];

printf("Input the string : ");
fgets(string,sizeof(string),stdin);

    size_t len = strlen(string);
    if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }

int x = strlen(string);
printf("Length of the string is : %d",x);

}