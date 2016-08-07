/*
Program:Magic Number Program #1
Author:ghost 
Date:25-06-2016
*/

#include<stdio.h>

int main(void){
int magic;
int guess;
magic=rand();
printf("Guess the magic number : ");
scanf("%d",&guess);
if(guess==magic)
printf("**Right**\n");
printf("Guess : %d\n",guess);
printf("Magic : %d\n",magic);
return 0;
}
