#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 5

struct cqueue
{
	int item[SIZE];
	int rear;
	int front;
};

typedef struct cqueue qu;
void insert(qu *);
void delet(qu *);
void display(qu *);

void main(){
	int ch;
	qu *q;
	q->rear = -1;
	q->front = 0;
	printf("Menu for program: \n");
	printf("1) Enqueue\n2) Dequeue\n3) Display\n4) Exit\n");
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
	getch();
}
void insert(qu *q){
	int d;
//	printf("Enter data to be inserted: ");
//	scanf("%d",&d);
	if(q->rear%SIZE==q->front){
		printf("Queue is full\n");
	}else{
		q->rear = (q->rear+1)%SIZE;
		printf("Enter data to be inserted: ");
		scanf("%d",&d);
		q->item[q->rear] = d;
	}
}
void delet(qu *q){
	int d;
	if(q->rear==q->front){
		printf("Queue is empty\n");
	}else{
//		d = q->item[q->front];
		q->front = (q->front+1)%SIZE;
		printf("Deleted item is: %d",q->item[q->front]);
	}
}
void display(qu *q){
	int i;
	if(q->rear==q->front){
		printf("Queue is empty\n");
	}else{
		printf("Item of queue are: \n");
		for(i= (q->front+1)%SIZE;i!=q->rear;i = (i+1)%SIZE){
			printf("%d\t",q->item[i]);
		}
		printf("%d\t",q->item[q->rear]);
	}
}
