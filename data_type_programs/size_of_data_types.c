/*
Program: A basis program for check the size of data types
Author:ghost
Date:25-06-2016
*/

#include<stdio.h>
int main(char **argv,int argc){
printf("size of int %d\n",sizeof(int));
printf("size of short int %d\n",sizeof(short int));
printf("size of long int %d\n",sizeof(long int));
printf("size of signed int %d\n",sizeof(signed int));
printf("size of unsigned int %d\n",sizeof(unsigned int));
printf("size of short signed int %d\n",sizeof(short signed int));
printf("size of short unsigned int %d\n",sizeof(short unsigned int));
printf("size of long signed int %d\n",sizeof(long signed int));
printf("size of unsigned long int %d\n",sizeof(unsigned long int));
printf("size of float %d\n",sizeof(float));
printf("size of double %d\n",sizeof(double));
printf("size of char %d\n",sizeof(char));
printf("size of unsigned char %d\n",sizeof(unsigned char));
printf("size of signed char %d\n",sizeof(signed char));
printf("size of long double %d\n",sizeof(long double));
printf("size of long long double %d\n",sizeof(long long int));
return 0;
}
