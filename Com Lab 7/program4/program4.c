#include<stdio.h>

int main(){

int number[5]={1,2,3,4,5};

int length = sizeof(number) / sizeof(number[0]);

for(int i=0;i<length;i++){

printf("%d\n",number[i]);
}

}