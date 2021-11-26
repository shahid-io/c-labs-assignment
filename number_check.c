#include<stdio.h>

int main(){
	int num;
	printf("Enter any number : ");
	scanf("%d",&num);

	switch(num>0){
		case 1:
			printf("%d Number is Negative.\n",num);
			
		break;
		case 0 : 
			if(num<0){
				printf("%d Number is Negative.\n",num);
			}else{
				printf("%d Number is Zero.\n",num);
			}
		break;
	}
	return 0;
}
