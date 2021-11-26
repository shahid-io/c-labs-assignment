#include<stdio.h>
#include<ctype.h>
int main(){
	char ch;
	printf("Enter a character : ");
	scanf("%c",&ch);
	if(isalpha(ch))
		printf("character.\n");
	else
		printf("not a character.\n");
	return 0;
}
	
