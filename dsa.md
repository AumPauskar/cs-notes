# Data structures and algorithms

## The big O notation
The big O notation is a wat to find the scalablity and useablity of a particular program on a large scale. The 

## Data structures

### Stacks
Stacks is a datastructure which works on the principle of FILO (first in last out), with an extra element only being added when at one end of the array. It has one extra index value which refers to the top index of the array.
```
// program to implement stack in c
#include <stdio.h>

int arr[16], top = -1, max = 16, lever = 1;
void push() {
	int tmp;
	if (top >= max-1) {
		printf("Stack overflow\n");
	} else {
		printf("Enter the amount needed to be appended: ");
		scanf("%d", &tmp);
		if (tmp == -1) {
			lever = 0;
			printf("Exitting code\n");
		} else {
			top++;
			arr[top] = tmp;
			printf("New element %d sucessfully added\n", tmp);
		}
	}
}

void pop() {
	if (top < 0){
		printf("Empty stack\n");
	} else {
		arr[top] = 0;
		top--;
	}
}

void display() {
	int i;
	printf("[ ");
	for (i=0; i<=top; i++) {
		printf("%d ", arr[i]);
	}
	printf("]\n");
}

int main() {
	int choice, i, tmp;
	for (i=0; i<max; i++) {
		printf("Enter element of the array[%d]: ", i);
		scanf("%d", &tmp);
		if (tmp == -1) {break;}
		arr[i] = tmp;
		top++;
	}
	while (lever == 1) {
		printf("Enter the choice\n1. Append\n2. Pop\n3. Display\n4. Quit\n");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			push();
			break;
		
		case 2: pop();
			break;

		case 3: display();
			break;

		case 4: lever = 0;
			break;
			
		default:
			printf("Invalid option selected\n");
		}
	}
}
```

### Queues
Queue is a multiway stack with the FIFO algorithm (first in first out), it consists of two index pointers with one being the first element pointer  and ther other being at the rear of the element. 
```
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
#define MAX 4
// global variables
int queue[MAX];
int front = -1, rear = -1;

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
			// 4 -> display  5 -> exit
			printf("0: Help\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\n\n");
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
			lever = 0; // while loop variable (reset)
			break;
		default:
			printf("invalid option chosen\n");
			break;
		}
	}
	
	return 0;
}
```

- Using a queue with two stacks	