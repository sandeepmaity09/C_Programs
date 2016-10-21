/*
 * Program to reverse the string given
 * Ghost Licence
 * (c)2016, The Warmachine
*/

#include<stdio.h>
#include<string.h>

void reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s+len-1;
   // printf("%i\n",len);
   // printf("%c\n",*t);
    while(t>=s) {
      printf("%c\n",*t);
      t=t-1;
    }
    puts("");
}

int main()
{
    char str[]="Maity";
    reverse(str);
    return 0;
}
