/*
Program:Multiple loop control variables
Author:ghost
Date:25-06-2016
*/

#include<stdio.h>
#include<string.h>

void converge(char *targ,char *src);

int main(void){
char target[80]="XXXXXXXXXXXXXXXXXXXXXXXXXX";
converge(target,"This is test of converge().");
printf("Final String: %s\n",target);
return 0;
}

void converge(char *targ,char *src){
int i,j;
printf("%s\n",targ);
for(i=0,j=strlen(src);i<=j;i++,j--){
targ[i]=src[i];
targ[j]=src[j];
printf("%s\n",targ);
}
}
