#include <stdio.h>
#include <math.h>

int main(){
	int a,b,c;
	int discriminant;
	float x,y;
	printf("Enter co-efficient of x^2, x and constant terms : ");
	scanf("%d %d %d",&a,&b,&c);
	discriminant = b*b-4*a*c;
       if(discriminant < 0)
	       printf("Both roots are imaginary\n");
	
       if(discriminant == 0){
	       printf("Both roots are equal.\n");

	       x = -b/(2.0*a);
	       printf("Root is %f",x);

       
       }
       if(discriminant > 0){
	       printf("Both roots are real and distinct.\n");
       
       		
       		x = (-b+sqrt(discriminant))/(2*a);
		y = (-b-sqrt(discriminant))/(2*a);
		printf("Roots are : %f, %f",x,y);
       }
       return 0;
}


