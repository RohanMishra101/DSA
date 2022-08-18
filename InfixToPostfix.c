
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
			len--;
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

