/* 
 * Program for card counting to imporve bet in blackjack
 * This is licenced by Ghost Public Licence.
 * (c)2016, The Warmachine.
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char card_name[3];
    int count = 0;
    puts("Enter the card_name: ");
    scanf("%s",card_name);
    int val = 0;
    if (card_name[0] == 'K') {
        val = 10;
    } else if (card_name[0] == 'Q') {
        val = 10;
    } else if (card_name[0] == 'J') {
        val = 10;
    } else if (card_name[0] == 'A') {
        val = 11;
    } else {
        val = atoi(card_name);
    }

    /* Check if the value is 3 to 6 */
    if (val >= 3 && val <=6) {
        count = count + 1;
        puts("Count has gone up");   
    } else if (val == 10) {
        count = count - 1;
        puts("Count has gone down");
    }
    return 0;
}
