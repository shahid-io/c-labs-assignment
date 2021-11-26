#include<stdio.h>
int main(){
	int a, b, c;
	printf("Enter three number: ");
	scanf("%d%d%d",&a, &b, &c);
	printf("Inputed numbers are : %d, %d, %d\n",a,b,c);

	if(a>b){
		if(a>c){
			printf("%d is greater.\n",a);
		}else{
			printf("%d is greater.\n",c);
		}
	}else{
		if(b>c){
			printf("%d is greater.\n",b);
		}else{
			printf("%d is greater.\n",c);
		}
	}
	return 0;
}
