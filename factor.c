#include<stdio.h>
int main(){
	int n,i=1;
	printf("Enter an integer : ");
	scanf("%d",&n);
	while(i<=n){
		if(n%i == 0)
			printf("%d, ",i);
		++i;
	}
	return 0;
}

