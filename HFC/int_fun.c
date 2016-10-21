/*
 * Program to fun with integer
 * Ghost Licence
 * (c)2016,The Warmachine
*/

#include<stdio.h>

int fun(int msg[])
{
    int i=0;
    while(i < 6) {
        printf("Msg is %d\n",*(msg+i));
        i++;
    }
    printf("Msg size %lu\n",sizeof(msg));
}

int main()
{
    int msg[] = {134,34,82,3,4,5};
    fun(msg);
    return 0;
}
