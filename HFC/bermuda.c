/*
 * fun bermuda triangle
 * 
 * (c)2016, The Warmachine.
*/

#include<stdio.h>

void go_south_east(int* latitude,int* longtitude)
{
    *latitude = *latitude - 1;
    *longtitude = *longtitude + 1;
}

int main()
{
    int latitude = 32;
    int longtitude = -64;
    go_south_east(&latitude,&longtitude);
    go_south_east(&latitude,&longtitude);
    go_south_east(&latitude,&longtitude);
    printf("Avast! Now at: [%i, %i]\n",latitude,longtitude);
    return 0;
}
