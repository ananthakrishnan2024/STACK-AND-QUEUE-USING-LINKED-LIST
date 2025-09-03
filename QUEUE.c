#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node* next;

};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue(int value) {
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	if(rear==NULL)    {
		front=rear=newnode;
	}
	else {
		rear->next=newnode;
		rear=newnode;
	}
	printf("Enqueued: %d\n",value);
}


void dequeue()
{

	if(front==NULL) {
		printf("Queue underflow\n");
		return;


	}
	struct node* temp=front;
	printf("Dequeued: %d\n",temp->data);
	front=front->next;
	if(front==NULL)
		rear=NULL;
	free(temp);
	
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	dequeue();
	dequeue();
	dequeue();
	dequeue();
	return 0;
}

