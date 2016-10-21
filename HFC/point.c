#include<stdio.h>
#include<stdlib.h>

//Globals
int x = 10;
int y = 20;

const int r = 13;
const int s = 14;

int main()
{
    //locals
    int i = 11;
    int j = 12;

    //const
    const int p = 12;
    const int q = 13;
    
    
    printf("Global value x %i\n",x);
    printf("Global value y %i\n",y);
    printf("Local value i %i\n",i);
    printf("Local value j %i\n",j);
    printf("Const value p %i\n",p);
    printf("Const value q %i\n",q);
    printf("Global const value r %i\n",r);
    printf("Global const value s %i\n",s);
    printf("Global Address x %p\n",&x);
    printf("Global Address y %p\n",&y);
    printf("Local Address i %p\n",&i);
    printf("Local Address j %p\n",&j);
    printf("Const Address p %p\n",&p);
    printf("Const Address q %p\n",&q);
    printf("Global const Address %p\n",&r);
    printf("Global const Address %p\n",&s);
    return 0;
}
