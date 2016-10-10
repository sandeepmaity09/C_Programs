/*
program: a program to demonstrate the const qualifier
author:ghost
Date:25-06-2016
*/

#include<stdio.h>

void sp_to_dash(char *str);

int main(char **argv,int argc){
sp_to_dash("this is a test");
//sp_to_dash("this is not a test");
//sp_to_dash("-");
return 0;
}

void sp_to_dash(char *str){
char *temp = str;
printf("%s\n",temp);
printf("%d\n",*temp);
printf("%d\n",*str);
printf("%s\n",str);

/*
while(*str){
if(*str==' ')
*str='-';
printf("%c",'-');
else
printf("%c",*str);
str++;
}
printf("\n");
while(*temp){
printf("%p\n",temp);
temp++;
}
*/
printf("\n");
}

