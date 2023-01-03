/* Termwork 8
 * Write a program to demonstrate the implementation of customized exception handling.
 * 
 * Assume that you have received a request from the transport authority for automating the
 * task of issuing the permanent license for two wheelers. The mandatory condition to issue the
 * license are: 
 * 1) the applicant must over 18 years of age and 
 * 2) holder of a valid learner’s license and 
 * 3) no accident cases in the last one year.
 * Write a Java program that reads user details as required (use the Scanner class). Create user
 * defined exceptions to check for the three conditions imposed by the transport authority. Based
 * on the inputs entered by the user, decide and display whether or not a license has to be issued
 * or an error message as defined by the user exception.
*/

import java.util.Scanner;



class UnderageException extends Exception {
	UnderageException(String s) {
		super(s);
	}

	@Override
	public String toString() {
		return "Applicant is underage";
	}
}

class ValidLearnersLicenseException extends Exception {
	ValidLearnersLicenseException(String s) {
		super(s);
	}

	@Override
	public String toString() {
		return "Applicant doesn't have LL";
	}
}

class AccidentLicenseException extends Exception {
	AccidentLicenseException(String s) {
		super(s);
	}

	@Override
	public String toString() {
		return "Applicant had prior accident cases";
	}
}

class Licence {
	String name;
	int age, yeets;
	char gender, valid_LL;

	void readData() {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter name: ");
		name = sc.nextLine();
		System.out.print("Enter age: ");
		age = sc.nextInt();
		System.out.print("Enter gender: ");
		gender = sc.next().charAt(0);
		System.out.print("Enter LL: y/n");
		valid_LL = sc.next().charAt(0);
		System.out.print("No of YEETS: "); // yeah this is accident cases, smackheads!
		yeets = sc.nextInt();
		sc.close();

	}
}
public class tw8 {

	static void validateData(Licence li) {
		try {
			if (li.age < 18) {
				throw new UnderageException("Bhai tu verstappen hai kya? ");
			}
			if (li.valid_LL != 'y') {
				throw new ValidLearnersLicenseException("Sacchi TP gand marega! ");
			}
			if (li.yeets > 0) {
				throw new AccidentLicenseException("Mazepin wale bhau tu russia me ja! ");
			}
		} 
		catch (UnderageException uae){					// uae == underAgeException
			System.out.println(uae.getMessage()+uae);	// uae != unitedArabEmirates
		}
		catch (ValidLearnersLicenseException vlle) {
			System.out.println(vlle.getMessage()+vlle);	
		}
		catch (AccidentLicenseException ale) {
			System.out.println(ale.getMessage()+ale);
		}


	}
	public static void main(String[] args) {
		Licence li1 = new Licence();
		li1.readData();

		validateData(li1);
	}
}