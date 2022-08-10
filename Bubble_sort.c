#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

float f(float x);
int main()
{
	int itr,i=0;
	float root,a,b,E,err,f1,f2,f3,f0;

	printf("Enter value of a, b and E:\n");
	scanf("%f %f %f",&a, &b, &E);
	printf("Enter no. of Iteration: ");
	scanf("%d",&itr);
	f1 = f(a);
	printf("f(a) = %f",f1);
	f2 = f(b);
	printf("\nf(b) = %f",f2);
	if(f1*f2>0){
		printf("a and b donot have any root.");
		exit(0);
	}
	do{
		f0 = (a+b)/2;
		printf("\nx = %f",f0);
		f3 = f(f0);
		printf("\nf(x) = %f",f3);
		if(f1 * f3 > 0){
			b = f0;
			printf("\niteration %d is %f",i+1, b);
		}
		else{
			a  = f0;
			printf("\niteration %d is %f",i+1, a);
		}
		err = (b-a)/a;
		if(err < E){
			root = (a+b)/2;
			printf("\nroot = %f",root);
			exit(0);
		}
		else{
			i++;
		}
	}while(i<itr);
	return 0;
}
float f(float x){
	float temp = x*x*x + x*x + x + 7;
	return(temp);
}
