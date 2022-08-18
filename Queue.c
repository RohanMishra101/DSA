#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 20
struct queue
{
	int item[SIZE];
	int rear;
	int front;
};

typedef struct queue qu;
void insert(qu *);
void delet(qu *);
void display(qu *);

int main()
{
	
	int ch;
	qu *q;
	q->rear = -1;
	q->front = 0;
	printf("Menu for program: \n");
	printf("1) Insert\n2) Delete\n3) Display\n4) Exit\n");
	do{
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				insert(q);
				break;
			case 2:
				delet(q);
				break;
			case 3:
				display(q);
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Wrong choice!!");
				break;
		}
	}while(ch<5);
	return 0;
}
void insert(qu *q){
	int d;
	printf("Enter data to be inserted: ");
	scanf("%d",&d);
	if(q->rear == SIZE-1){
		printf("Queue is full\n");
	}else{
		q->rear++;
		q->item[q->rear] = d;
	}
}
void delet(qu *q){
	int d;
	if(q->rear<q->front){
		printf("Queue is empty\n");
	}else{
		d = q->item[q->front];
		q->front++;
		printf("Deleted item is: %d",d);
	}
}
void display(qu *q){
	int i;
	if(q->rear<q->front){
		printf("Queue is empty\n");
	}else{
		for(i= q->front;i<=q->rear;i++){
			printf("%d\t",q->item);
		}
	}
}
