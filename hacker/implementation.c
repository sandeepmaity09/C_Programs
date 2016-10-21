#include <stdio.h>

int main()
{
    int one,two,three,four,five,six,seven,eight,nine,zero;
    int count=0;
    int i=0;
    zero=one=two=three=four=five=six=seven=eight=nine=0;
    char str[100];
    scanf("%s",str);

    while(str[count] != '\0')
    count++;

    for(i=0;i<count;i++) {
        switch(str[i]){
            case '0':
              zero++;
              break;
            case '1':
              one++;
              break;
            case '2':
              two++;
              break;
            case '3':
              three++;
              break;
            case '4':
              four++;
              break;
            case '5':
              five++;
              break;
            case '6':
              six++;
              break;
            case '7':
              seven++;
              break;
            case '8':
              eight++;
              break;
            case '9':
              nine++;
              break;
            }
    }
    
    printf("%d %d\n",0,zero);
    printf("%d %d\n",1,one);
    printf("%d %d\n",2,two);
    printf("%d %d\n",3,three);
    printf("%d %d\n",4,four);
    printf("%d %d\n",5,five);
    printf("%d %d\n",6,six);
    printf("%d %d\n",7,seven);
    printf("%d %d\n",8,eight);
    printf("%d %d",9,nine);
    

    //printf("%d",count);
    return 0;
}

