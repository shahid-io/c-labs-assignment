#include<stdio.h>

int fibo(int n){
	if(n<=1){
		return n;
	}
	return fibo(n-1)+fibo(n-2);
}



int main(){
	int n;
	printf("Enter end point : ");
	scanf("%d",&n);
	printf("%d",fibo(n));
	return 0;
}
