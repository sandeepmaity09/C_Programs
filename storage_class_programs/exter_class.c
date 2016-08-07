#include<stdio.h>

int main(void){
extern int  first,last;  /*use global vars*/
printf("%d %d\n",first,last);
return 0;
}

/*global defination of first and last*/
int first = 20;
int last = 10;
