#include<stdio.h>
#include<conio.h>

int main(){
	int degree,x;
	int a[10],i;
	int sum;
	
	printf("Enter the degree of the polynomial: ");
	scanf("%d",&degree);
	printf("Enter the coefficient from lower to higher order: \n");
	for(i=0;i<=degree;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the value of x:");
	scanf("%d",&x);
	sum = a[degree];
	for(i = degree-1; i>=0;i--){
		sum = sum*x+a[i];
	}
	printf("The result is : %d",sum);
	return 0;
}
