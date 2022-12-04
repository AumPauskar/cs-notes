/* Algorithm of queue
 *
 * Step 1: Start
 * Step 2: Assign a queue of a maximum size MAX
 * Step 3: Let front be -1 and rear be -1
 * Step 4: Make a function enqueue ehich adds a new variable
 *			The new function also adds 1 to the rear variable
 * Step 5: Make a function deque which removes the front element
 * 			The new function also adds 1 to the front variable
 * Step 6: Make a function peek which can seek any element from the queue
 * Step 7: Stop
*/


#include <stdio.h>
#define MAX 16
// global variables
int queue[MAX];
int front = -1, rear = -1;
void blit();

// enqueue funtion
void enqueue(int element)
{
	if (rear < MAX)
	{
		// increments the index then add an element
		rear++;
		queue[rear] = element;
		printf("Element %d added to queue\n", queue[rear]);
	}
	else
	{
		printf("Queue full\n");
	}
	
}

void dequeue()
{
	// queue empty condition
	// if front > rear OR
	// 					front and rear is -1
	if ((front > rear) || ((front == -1) && (rear == -1)))
	{
		printf("Queue empty\n");
	}
	else 
	{
		int tmp = queue[front]; // tmp variable for display
		// adds one to the front index then resets the element
		front++;
		queue[front] = 0;
		printf("Element %d deleted from the queue\n", tmp);
		blit();
	}
}

void peek(int location)
{
	// exit condition for invalid input
	if (location > MAX || location < 0)
		printf("Out of bounds\n");
	else
		printf("Element %d is found at location %d\n", queue[location], location);
}

void display()
{
	printf("[ ");
	// runs a for loop from front to rear index
	for (int i = front+1; i < rear+1; i++)
		printf("%d ", queue[i]);
	printf("]\n");
	
}

void displayFull()
{
	printf("[ ");
	// runs a for loop from front to rear index
	for (int i = 0; i < MAX; i++)
		printf("%d ", queue[i]);
	printf("]\n");
}

void blit()
{
	for (int i = 0; i<MAX; i++)
	{
		if (i > 0)
		{
			queue[i-1] = queue[i];
		}
	}
}
int main(int argc, char const *argv[])
{
	int lever = 1; // lever variable for while loop
	int choice, input;  // choice -> switch statement
						// input  -> arguments for functions
	while (lever == 1)
	{
		printf("Enter a choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 0:
			// choices
			// 0 -> help     1 -> enqueue
			// 2 -> dequeue  3 -> peek
			// 4 -> display  5 -> full display
			// 6 -> exit
			printf("0. Help\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Full display\n6. Exit\n\n");
			break;
		case 1:
			printf("Enter the element to be enqueued: ");
			scanf("%d", &input);
			enqueue(input);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			printf("Enter the element to be peeked in: ");
			scanf("%d", &input);
			peek(input);
			break;
		case 4:
			display();
			break;
		case 5:
			displayFull();
			break;
		case 6:
			lever = 0; // while loop variable (reset)
			break;
		default:
			printf("invalid option chosen\n");
			break;
		}
	}
	
	return 0;
}
