import java.util.Scanner;

public class tw9 {
  public static void main(String[] args) {
	// string read operations
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter a string: ");
    String input = scanner.nextLine();

    String[] words = input.split("\\s+"); // split input string into words
	scanner.close();

	// iterating through words 
    for (String word : words) {
      int s = 0; // start index
      int e = word.length() - 1; // end index
	  // recursive code to convert words to uppercase
      if (isPalindrome(word, s, e)) {
        System.out.println(word.toUpperCase());
      } else {
		// reverses and changes the output to lowecase
        System.out.println(new StringBuilder(word).reverse().toString().toLowerCase());
      }
    }
  }

  // function definition to check pallindrome
  public static boolean isPalindrome(String word, int s, int e) {
    if (s == e) {
      return true;
    } // splitting into charecter arrays and checking if not pallindrome
    if (word.charAt(s) != word.charAt(e)) {
      return false;
    } // enables recursion
    if (s < e + 1) {
      return isPalindrome(word, s + 1, e - 1);
    }
    return true;
  }
}