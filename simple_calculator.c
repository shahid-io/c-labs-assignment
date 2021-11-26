#include<stdio.h>
#include<stdlib.h>


int main(){
	char ch;
	float a,b;
	float r = 0;


	printf("+\n-\n*\n/\n0. Exit\n");
        printf("Enter your choice : ");
        scanf("%c",&ch);

	printf("Enter first number : ");
	scanf("%f",&a);
        printf("Enter second number : ");
        scanf("%f",&b);
		
	switch(ch){
		case '+':
			r = a+b;
		break;

		case '-':
			r = a-b;
		break;

		case '*':
			r = a*b;
		break;

		case '/':
			r = a/b;
		break;

		default:
			printf("Enter valid operation!!!\n");
	}
	printf("(%f %c %f) : %f\n",a,ch,b,r);
	return 0;
}
		
				


