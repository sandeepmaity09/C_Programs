/*
A Simple program to demonstrate pointers
Author:ghost
Date:05-10-2016
*/

#include<stdio.h>

int main(char **argv,int argc){
int *num = 10;
printf("%d\n",num);
printf("%s\n",*num);
printf("%s\n",&num);
return 0;
}

