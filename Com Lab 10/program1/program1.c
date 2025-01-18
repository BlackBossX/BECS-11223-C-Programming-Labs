/****************************************
Include your header comment here
*****************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>




void fill_array();
void display_array();

int main (){


int values[10];
int x = sizeof(values) / sizeof(values[0]);
//printf("%d",x);

fill_array(values,x);
display_array(values,x);

return 0;

}





void fill_array(int ar[], int size){

srand(time(NULL));
for(int i = 0; i < size; i++)
{
ar[i] = rand() % 1000;
}
}



void display_array(int ar[], int size){
 for (int i=0;i<size;i++){
	printf("%d index is: %d\n",i,ar[i]);

}
}