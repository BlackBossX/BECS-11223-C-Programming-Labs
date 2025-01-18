#include<stdio.h>


int main(){

int units,total;

printf("Enter Units: ");
scanf("%d",&units);

if(units>=250 )
	total = total+ ((50*50)+(100*75)+(100*120)+((units-250)*150));

else if(units>=150 && units<250)
	total = total+ ((50*50)+(100*75)+((units-150)*120));


else if(units>=50&& units<150)
	total = total+ ((50*50)+((units-50)*75));

else if(units<50 && units>0)
	total = total+ units*50;


total = total + (total*20/100);
printf("Total is:%d ",total);
}

