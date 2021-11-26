#include<stdio.h>
int main(){
	int i, temp;
	int a,b;
	printf("enter start interval : ");
	scanf("%d",&a);
	printf("enter end interval : ");
        scanf("%d",&b);

	while(a<b){
		temp = 0;
		if(a<=1){
			++a;
			continue;
		}

		for(i=2; i<=a/2; ++i){
			if(a%i == 0){
				temp = 1;
				break;
			}
		}
		if(temp==0){
			printf("%d, ",a);
		}
		++a;
	}
	return 0;
}

