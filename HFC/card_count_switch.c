/*
 * Program for card counting to improve betting in blackjack
 * This is licenced by Ghost Public Licence.
 * (c)2016, The Warmachine
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char char_name[3];
    int count=0;
    puts("Enter the card_name: ");
    scanf("%s",char_name);
    int val = 0;
    switch(char_name[0]) {
    case 'K':
    case 'Q':
    case 'J':
        val = 10;
        break;
    case 'A':
        val = 11;
        break;
    default:
        val=atoi(char_name);
    }
    return 0;
}
