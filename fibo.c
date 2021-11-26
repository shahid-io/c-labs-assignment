#include<stdio.h>

int main(){
	int n,i;
	int a = 0, b = 1;
	int temp = a+b;
	printf("Enter end point : ");
	scanf("%d",&n);
	if(n<=1)
		return n;
	printf("Fibo.. Series %d, %d, ",a,b);
	for(int i=3;i<=n;i++){
		printf("%d, ",temp);
		a = b;
		b = temp;
		temp = a+b;
	}
	return 0;
}
