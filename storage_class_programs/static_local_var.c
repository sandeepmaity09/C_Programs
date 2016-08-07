#include<stdio.h>

int series(void);

int main(){
int i;
for(i=0;i<10;i++){
printf("%d\n",series());
}
}

int series(void){
//int series_num=2;                      
static int series_num=2;          //when static is called then only a single copy of variable is created and stored through out the program and all time when call the function then value is return
series_num++;
return series_num;
}


