/*
Program: A program to use & and * operator
Author:ghost
Date:25-06-2016
*/

#include<stdio.h>

int main(void){
int target,source;
int *m;
source = 10;
m=&source;
target = *m;
printf("%d\t",target);
printf("%d\n",source);
return 0;
}
