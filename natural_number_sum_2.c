#include<stdio.h>
int main(){
	int n, sum = 0;
	printf("Enter a natural number : \n");
	scanf("%d",&n);
	sum = (n*(n+1))/2;
	printf("Sum of %d natural Number is : %d\n",n,sum);

	return 0;
}
