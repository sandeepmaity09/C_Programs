#include<stdio.h>
int main()
{
    char r[]="JQK";
    char *p=r;
    printf("%s\n",p);
    printf("%c\n",r[0]);
    printf("%c\n",p[1]);
    p[1]=p[2];
    p[2]=p[0];
    p[1]='L';
    p[2]='M';
    printf("%s\n",p);
    printf("%c\n",r[0]);
    printf("%c\n",r[1]);
    printf("%c\n",r[2]);
    printf("\n\n\n");
    printf("Array as Pointer %s\n",r);
    printf("%p\n",r);
    return 0;
}
