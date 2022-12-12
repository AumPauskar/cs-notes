/* Termwork 3
 * Write a program to demonstrate the implementation of parameterized:
 * a. Methods
 * b. Constructor
 * A certain small bank intends to automate few of its banking operations for its customers.
 * Design a class by name mybankAccount to store the customer data having following details:
 * 1.accountNumber 
 * 2. acctType 
 * 3. Name 
 * 4. Address 
 * 5. accountBalance
 * The class must have both default and parameterized constructors. Write appropriate method
 * to compute interest accrued on accountBalance based on accountType and time in years.
 * Assume 5% for S/B account 6.5% for RD account and 7.65 for FD account. Further, add two
 * methods withdrawAmount/depositAmount with amount as input to withdraw and deposit
 * respectively. The withdrawAmount method must report in-sufficient balance if
 * accountBalance falls below Rs. 1000.
*/

class MyBankAccount {
	int accountNumber;
	String accountType; // sb, rd, fd
	String name;
	String address;
	double accountBalance;
	double rate;

	// type 1 
	MyBankAccount(int accountNumber, String accountType, String name, String address, double accountBalance, double rate) {
		this.accountNumber = accountNumber;
		this.accountType = accountType;
		this.name = name;
		this.address = address;
		this.accountBalance = accountBalance;
		this.rate = rate;
	}
	// default
	MyBankAccount(int accountNumber, String accountType, String name, String address, double accountBalance) {
		this.accountNumber = accountNumber;
		this.accountType = accountType;
		this.name = name;
		this.address = address;
		this.accountBalance = accountBalance;
		if (accountType == "sb") {
			this.rate = 0.05;
		} else if (accountType == "rd") {
			this.rate = 0.065;
		} else if (accountType == "fd") {
			this.rate = 0.0765;
		}
	}

	// add
	double deposit(double amount) {
		accountBalance += amount;
		return accountBalance;
	}
	// remove
	double withdraw(double amount) {
		// if money < 1000
		if (amount+1000 >= accountBalance) {
			System.out.println("Invalid account balance");
		} else {
			accountBalance -= amount;
		}
		return accountBalance;
	}

}
public class tw3 {
	public static void main(String[] args) {
		double tmp;
		MyBankAccount person1 = new MyBankAccount(101, "fd", "bruh", "galli", 500);
		tmp = person1.deposit(5000);	
		System.out.println("Current account balance: " + tmp);
		tmp = person1.withdraw(2000);
		System.out.println("Current account balance: " + tmp);
		tmp = person1.withdraw(4000);
		System.out.println("Current account balance: " + tmp);
	}
}
