#include<stdio.h>

int main(){
	int num,i;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num<=0)
		return 1;
	for(i=1;i<=10;i++){
		printf("%d\n",(num*i));
	}
	return 0;
}
