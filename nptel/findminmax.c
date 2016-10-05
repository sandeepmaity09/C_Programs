//Finding the minimum and maximum from N numbers
//sandeepmaity09
//04-10-2016	

#include<stdio.h>

void main(){
int n,max,min,i,numb;
printf("Give n: ");
scanf("%d",&n);
printf("\n n = %d \n",n);
scanf("%d",&max);
min = max;
for(i=1;i<=n-1;i++){
scanf("%d",&numb);
if(numb > max) max=numb;
if(numb < min) min=numb;
}
printf("MAX = %d \n",max);
printf("MIN = %d \n",min);
}

