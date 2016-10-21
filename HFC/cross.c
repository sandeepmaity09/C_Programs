/*
 * Program for a word puzzle game C-Cross
 * Ghost Licence(just for fun)
 * (c)2016,The Warmachine
*/

#include<stdio.h>
#include<string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s+len-1;
    while(t>=s){
        printf("%c",*t);
        t=t-1;
    }
    puts("");
}

int main()
{
    char *juices[]={"dragonfruit","waterberry","sharonfruit","uglifruit",
                   "rumberry","kiwifruit","mulberry","strawberry","blueberry",
                   "blackberry","starfruit"
                  };
    int i=0;
   
    printf("%p\n",juices);
    printf("\n\n\n");
   
    for(i=0;i<11;i++){
        printf("%p\n",juices[i]);
    }
    printf("\n\n\n");
    for(i=0;i<11;i++){
        printf("%s\n",juices[i]);
    }
    printf("\n\n");
    printf("%c\n",juices[1][0]);
    //juices[1][0]='k';
    //juices[1][0]='l';


    char *a;
    puts(juices[6]);
    print_reverse(juices[7]);
    a=juices[2];
    juices[2]=juices[8];
    juices[8]=a;
    puts(juices[8]);
    print_reverse(juices[(18+7)/5]);
    puts(juices[2]);
    print_reverse(juices[9]);
    juices[1]=juices[3];
    puts(juices[10]);
    print_reverse(juices[1]);

    for(i=0;i<11;i++){
        printf("%s\n",juices[i]);
    }
    return 0;
}
