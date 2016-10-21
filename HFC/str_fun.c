/*
 * Programs to pass a string as function arguments
 * Ghost Public Licence (just for fun)
 * (c)2016, The Warmachine
*/

#include<stdio.h>

void fortune(char* msg)
{
    printf("Message reads: %s\n",msg);
    printf("msg occupies %lu bytes\n",sizeof(msg));
    printf("The quote string is stored at: %p\n",msg);
    printf("First character in the line %c\n",msg[0]);
    printf("second character in the line %c\n",msg[1]);
}

int main()
{
    char quote[]="Cookies makes you fat";
   // puts("Enter the msg: ");
   // gets(quote);
    fortune(quote);
    return 0;
}
