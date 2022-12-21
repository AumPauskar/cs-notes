/* Termwork 7
 * Write a program to demonstrate the implementation of interfaces.
 * Write a Java application to implement the following UML diagram.
 * PrimeTester class implements isPrime() method by iterating from 2 to n-1 for a given
 * number n
 * ImprPrimeTester class implements isPrime() method by iterating from 2 to n/2
 * FasterPrimeTester class implements isPrime() method by iterating from 2 to sqrt(n)
 * FastestPrimeTester class implements isPrime() method using Fermat’s Little theorem.
 * Fermat’s Little Theorem:
 * 		If n is a prime number, then for every a, 1 < a < n-1,
 * 		a^(n-1) % n = 1
*/

import java.util.Scanner;

interface Prime {
	boolean isPrime(int num);
}

class PrimeTester implements Prime {
	public boolean isPrime(int num) {
		for (int i = 2; i < num; i++) {
			if (num%i == 0) {
				return false;
			} else {
				return true;
			}
		}
		return true;
	}
}

class ImprPrimeTester implements Prime {
	public boolean isPrime(int num) {
		for (int i = 2; i < num/2; i++) {
			if (num%i == 0) {
				return false;
			} else {
				return true;
			}
		}
		return true;
	}
}

class FasterPrimeTester implements Prime {
	public boolean isPrime(int num) {
		for (int i = 2; i < Math.sqrt(num); i++) {
			if (num%i == 0) {
				return false;
			} else {
				return true;
			}
		}
		return true;
	}
}

class FastestPrimeTester implements Prime {
	public boolean isPrime(int num) {
		// a, 1 < a < n-1,
		// * 		a^(n-1) % n = 1
		for (int i = 1; i < num-1; i++) {
			if (Math.pow(i, (num-1)) % num == 1) {
				return true;
			} else {
				return false;
			}
		}
		return true;
	}
}

public class tw7 {
	public static void main(String[] args) {
		int num, choice;
		boolean ans = false;
		Scanner in = new Scanner(System.in);
		System.out.print("Enter a number: ");
		num = in.nextInt();
		System.out.print("1. Prime\n2. Improved\n3. Faster\n4. Fastest\nEnter choice:");
		choice = in.nextInt();
		in.close();
		switch (choice) {
			case 1:
			Prime myInstance1 = new PrimeTester();
			ans = myInstance1.isPrime(num);
			break;
	
			case 2:
			Prime myInstance2 = new ImprPrimeTester();
			ans = myInstance2.isPrime(num);
			break;

			case 3:
			Prime myInstance3 = new FasterPrimeTester();
			ans = myInstance3.isPrime(num);
			break;

			case 4:
			Prime myInstance4 = new FastestPrimeTester();
			ans = myInstance4.isPrime(num);
			
			break;
			default:
			System.out.println("Invalid option selected");
			break;
		}
		System.out.println("The number is a prime number: " + ans);
	}

	
}