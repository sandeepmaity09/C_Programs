/*
Program: A program to input modem port 
Author:ghost
Date:25-06-2016
*/

#include<stdio.h>
#include<stdlib.h>

char get_char_from_modem(void);

int main(void){
printf("%c",get_char_from_modem());
return 0;
}

char get_char_from_modem(void){
char ch;
ch=read_modem();
return(ch & 127);
}
