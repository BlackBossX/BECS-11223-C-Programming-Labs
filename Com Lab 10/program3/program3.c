#include <stdio.h>
int main()

{

int x,y,total;
int *pval;

pval = &x;

*pval = 5;

pval =&y;

*pval =55;




pval = &total;

*pval = x+y;

printf("Total is : %d",total);



}