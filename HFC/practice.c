#include<stdio.h>
int main()
{
    char food[5];
    printf("Enter favorite food: ");
    // scanf("%s",food);
    fgets(food,sizeof(food),stdin);
    printf("Favorite food: %s\n",food);
    return 0;
}
