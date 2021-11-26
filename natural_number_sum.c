#include<stdio.h>
int main(){
	int limit, i, sum=0;
	printf("Enter ending natural number : ");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		sum = sum+i;
	}
	printf("Sum of natural Numbers %d\n",sum);

	return 0;
}
