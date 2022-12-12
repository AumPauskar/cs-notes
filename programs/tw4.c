#include <stdio.h>
#include <stdlib.h>
// constants and global variables
#define MAX 8
int front = -1, rear = -1;
int queue[MAX];

void enqueue(int element)
{
	// if the queue is empty
	if (front == -1 && rear == -1)
	{
		front = 0;
		rear = 0;
		queue[rear] = element;
	}
	// if the queue is full
	else if (rear >= MAX)
		printf("Queue overflow\n");
	// normal operation
	else
	{
		rear++;
		queue[rear] = element;
	}
}

int dequeue()
{
	int element;
	// if the queue is empty
	if (front == -1 && rear == -1)
	{
		printf("Queue is empty\n");
		element = 0;
	}
	// if at the last element
	else if (front == rear)
	{
		element = front;
		front = -1;
		rear = -1;
		printf("Queue reset\n");
	}
	// normal operation
	else
		front++;
	return element;
}

void display()
{
	int i;
	printf("[ ");
	for (i = front; i <= rear; i++)
		printf("%d ", queue[i]);
	printf("]\n");
}

int main(int argc, char const *argv[])
{
	int flag = 1;
	int choice, element;
	while (flag == 1)
	{
		printf("Enter choice\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n➜  ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
			printf("Enter the element to be enqueued: ");
			scanf("%d", &element);
			enqueue(element);
			printf("%d enqueued in the queue\n", element);
			break;
			
			case 2:
			element = dequeue();
			printf("%d dequeued from the queue\n", element);
			break;

			case 3:
			display();
			break;

			case 4:
			flag = 0;
			break;

			default:
			break;
		}
	}
	return EXIT_SUCCESS;
}