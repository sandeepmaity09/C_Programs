/*
 * use of strstr(test,pattern) from string.h
 * Ghost licence
 * (c)2016, The Warmachine
*/

#include<stdio.h>
#include<string.h>

int main()
{
    char s0[]="dysfunctional";
    char s1[]="func";
    long int p =(long int) strstr(s0,s1);
    printf("%lu",p);
    if (strstr(s0,s1))
      puts("I found the pattern in text");
    else
      puts("Find Nothing");
    return 0;
}
