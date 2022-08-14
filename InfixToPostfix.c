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
