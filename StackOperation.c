#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 20
int main()
{
	int ch,top=-1,stack[size],ele,i;
	while(1)
	{
		printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top==size-1)
				{
					printf("Stack overflow!!\n");
					break;
				}
				else
				{
					printf("Enter the element:");
					scanf("%d",&ele);
					top=top+1;
					stack[top]=ele;
					printf("Element Entered!!\n");
					break;
				}
			case 2:
				if(top==-1)
				{
					printf("Stack empty!!\n");
					break;
				}
				else
				{
					printf("Item deleted is %d\n",stack[top]);
					top=top-1;
					break;
				}
			case 3:
				if(top==-1)
				{
					printf("Stack empty!!\n");
					break;
				}
				else
				{
					for(i=top;i>=0;i--)
					{
						printf("%d",stack[i]);
						printf("\n");
					}
					break;
				}
			case 4:
			    exit(0);
			default:
			    printf("Enter valid choice!!\n");
				break;	
		}
	}
}
