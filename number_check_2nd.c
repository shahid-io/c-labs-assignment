#include<stdio.h>

int main(){
	int num;
	char ch;
	printf("Enter a number : ");
	scanf("%d",&num);
	switch(num>0){
		case 1:
			ch = 'p';
		break;
		case 0:
			if(num<0)
				ch = 'n';
			else
				ch = 'z';
		break;
	}
	if(ch=='p')
		printf("positive numbre.\n");
	if(ch=='n')
		printf("negative number.\n");
	if(ch=='z')
		printf("zero.\n");

	return 0;
}
