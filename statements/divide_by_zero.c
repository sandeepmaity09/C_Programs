/*
Program: A program to divide by zero error
Author:ghost
Date:25-06-2016
*/

#include<stdio.h>

int main(void){
int a,b;
printf("Enter Two Numbers: ");
scanf("%d %d",&a,&b);
if(b)
printf("%d\n",a/b);
else
printf("Cannot divide by zero\n");
return 0;
}
