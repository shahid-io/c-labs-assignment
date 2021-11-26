#include<stdio.h>

#include<stdio.h>

int facto(int num){
	int i = num, fact = 1;
	if(num==0)
        return 1;

    while (num / i != num) {
        fact = fact * i;
        i--;
    }
    return fact;
}

int main(){
	int num;
    	printf("Enter a number : ");
    	scanf("%d",&num);

	printf("Factorial of %d is %d\n", num, facto(num));

    return 0;
}
