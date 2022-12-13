/* Termwork 5
 *
 * Write a program to demonstrate the implementation of method overloading.
 * Create a Stack class having an integer array say elem and top_of_stack as instance
 * variables. Define three overloaded methods having the following signatures:
 * a. initStack(int size) to create an array of specified size and initialize the top_of_stack
 * b. initStack(Stack another) to intialize the Stack object with state of the Stack object
 * "another"
 * c. initStack(int [] a) to initialize contents of a[] to the instance variable elem.
 * 
 * Write following methods:
 * a. push(): Pushes the element onto the stack,
 * b. pop(): Returns the element on the top of the stack, removing it in the process, and
 * c. peek(): Returns the element on the top of the stack, but does not remove it.
 * Also write methods that check whether stack is full and stack is empty and return boolean
 * value true or false appropriately.
*/

import java.util.Arrays;
class Stack {
	int top;
	int max;
	int[] stack = new int[] {};

	void initStack(int size) {
		top = -1;
		max = size;
	}

	void initStack(Stack another) {
		System.out.println(Arrays.toString(another.stack));
		stack = new int[another.stack.length];
		max = another.stack.length;
		top = max-1;
		for (int i = 0; i < max; i++) {
			this.stack[i] = another.stack[i];
		}
	}
	void initStack(int[] a) {
		this.max = a.length;
		top = max-1;
		stack = new int[max];
		for (int i = 0; i < top; i++) {
			this.stack[i] = a[i];
		}
	}

	void push(int element) {
		if (top < max) {
			top++;
			stack[top] = element;
			System.out.println(stack[top] + "added to stack");
		} else {
			System.out.println("Stack overflow");
		}
	}

	void pop() {
		if (top < 0) {
			System.out.println("Stack underflow");
		} else {
			System.out.println(stack[top] + " removed from stack");
			top--;
		}
	}

	void display() {
		System.out.print("[ ");
		if (top > 0) {
			for (int i = 0; i < top; i++) {
				System.out.print(stack[i] + " ");
			}
			System.out.println("]");
		} else {
			System.out.println("Empty stack");
		}
	}

}
public class tw5 {
	public static void main(String[] args) {
		Stack stack1 = new Stack();
		int[] arr = {1,2,3,4,5};
		stack1.initStack(arr);
		stack1.display();
		Stack stack2 = new Stack();
		stack2.initStack(stack1);
		stack2.display();
		stack2.pop();
		stack2.display();
	}	
}
