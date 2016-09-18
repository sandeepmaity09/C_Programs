#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i,flag=0;
	i=2;
	printf("Enter a number : ");
	scanf("%d",&num);
	while(i<=num/2){
		if(num%i==0){
			printf("Number is not prime");
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
	printf("Number is Prime");
	return 0;
}
