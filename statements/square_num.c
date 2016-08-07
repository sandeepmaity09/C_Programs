/*
Program:A Program to square a given number but preseve the sign 
Author:ghost
Date:25-06-2016
*/

#include<stdio.h>

int main(void){
int isqrd,i;
printf("Enter a number : ");
scanf("%d",&i);

isqrd=i>0?i*i:-(i*i);
printf("%d squared is %d\n",i,isqrd);
return 0;
}
