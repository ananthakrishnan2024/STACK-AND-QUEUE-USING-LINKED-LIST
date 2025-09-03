#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* next;

};
struct node* top=NULL;
void push(int value)
{
	struct node* newnode=malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=top;
	top=newnode;
	printf("Pushed: %d\n",value);


}
void pop()
{
	if(top==NULL)
	{
		printf("Stack underflow condition");
		return;
	}

	struct node* temp=top;
	printf("popped: %d\n",top->data);
	top=top->next;
	free(temp);
}
int main()
{
	push(10);
	push(20);
	push(30);
	pop();
	pop();
	pop();
	pop();
}



