/****************************************
Author:T.M.D.P.M.De Alwis
Date Created:2024/08/14
Date Modified:2024/08/14
Purpose:Usage of Math Library
*****************************************/



#include<stdio.h>
#include<math.h>


int main(){

float value;
printf("Please enter your number\n");

scanf("%f",&value);//scan the user entered

//find the cosine value of the user input
printf("cos Value: %f\n",cos(value));


//find the sin value of the user input
printf("sin Value: %f\n",sin(value));

//raise the user value to the third power
printf("third power Value: %f\n",pow(value , 3));


//find the nearest integer value which is less than
printf("nearest integer value which is less than Value: %f\n",floor(value));



//find the smallest integer that is greater than
printf("smallest integer that is greater than Value: %f\n",ceil(value));





//find the natural log(e) of the user input
printf("log'e' Value: %f\n",log(value));


//find the log base 10 value of the user input
printf("log'10' Value: %f\n",log10(value));




}