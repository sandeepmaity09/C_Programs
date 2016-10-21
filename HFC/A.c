/*
 * Program to practice with gcc and it's features
 * This is licenced by Ghost Public Licence
 * (c)2016, The Warmachine.
*/

#include<stdio.h>

int main()
{
    int card = 10;
    if (card > 1)
        card = card - 1;
        if (card < 7)
            puts("Small card");
    else {
         puts("Ace!");
    }
    return 0;
}
