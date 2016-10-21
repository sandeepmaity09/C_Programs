#include<stdio.h>

int main()
{
    int N;
    int str[1440];
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        scanf("%s",str);
        int C=0;
        int j=0;
        int count[500];
        int l=0;
        while(str[j]!='\0'){
            if(str[j]=='C'){
                k++;
                count[l]=k;
            }
            if(str[j]=='E'||str[j]=='S'){
                l++;
            } 
        }
