<<<<<<< HEAD
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int precedency(char);
void main()
{
	int i,otos=-1,ptos=-1,len, length;
	char infix[100],poststack[100],opstack[100];
	printf("Enter a valid infix\n");
	gets(infix);
	length=strlen(infix);
	len=length;
	for(i=0;i<=length-1;i++)
	{
		if(infix[i]=='(')
		{
			opstack[++otos]=infix[i];
			len++;
		}
		else if(isalpha(infix[i]))
		{
			poststack[++ptos]=infix[i];
		}
		else if (infix[i]==')')
		{
			len++;
			while(opstack[otos]!='(')
			{	
				poststack[++ptos]=opstack[otos];
				otos--;
			}
			otos--;
		}
		else //operators
		{
			if(precedency(opstack[otos])>=precedency(infix[i]))
			{
				poststack[++ptos]=opstack[otos--];
				opstack[++otos]=infix[i];
			}
			opstack[++otos]=infix[i];
		}
	}
	while(otos!=-1)
	{
		poststack[++ptos]=opstack[otos];
		otos--;
	}
/********for displaying***************/
	for(i=0;i<len;i++)
	{
		printf("%c",poststack[i]);
	}
	getch();
	}
/****************precedency function*********************/
	int precedency(char ch)
	{
		switch(ch)
		{
		case '$':
			return(4);
		case'*':
			return(3);
		case'/':
			return(3);
		case'+':
			return(2);
		case'-':
			return(2);
		default:
			return(1);
		}
	}
=======
#include<stdio.h>
#include<conio.h>
int top=-1;
char stack[20];
void push(char x){
	stack[++top] =  x;
}
char pop(){
	return stack[top--];
}
int precedence(char ch){
	if(ch == '+' || ch == '-'){
		return 1;
	}else if(ch == '*' || ch == '/'){
		return 2;
	}else if(ch == '^'){
		return 3;
	}else{
		return -1;
	}
}
int main()
{
	char i,arr[20],c,n;
	printf("Enter your expression: ");
	gets(arr);
	printf("Postfix Expression is:");
	for(i = 0;arr[i]!='\0';i++){
		c = arr[i];
		if(precedence(c)>0){
			while(top!=-1&&precedence(stack[top])>=precedence(c)){
				printf("%c",pop());
			}
			push(c);
		}else if(c==')'){
			n = pop();
			while(n!='('){
				printf("%c",n);
				n = pop();
			}
		}else if(c == '('){
			push(c);
		}else{
			printf("%c",c);
		}
//		for(i=0;i<=top+1;i++){
//			printf("%c",pop());
//		}
		
	} 	
	return 0;
	
}
>>>>>>> 93ebce546177f8d84c71b705ca697a7d5342cbaa
