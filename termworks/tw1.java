/*
 * Termwork 1 - Program on 2D arrays
 * PS: There are 5 students who are enrolled in 3 subjects, find the
 * average of two marks out of three.
 */

import java.util.Scanner;
public class tw1 {

	public static void main(String[] args) {
		int[][] marks = new int[5][3];
		int[] total = {0,0,0,0,0};
		int[] avg = new int[5];
		Scanner in = new Scanner(System.in);
		for (int i=0; i<5; i++) {
			System.out.print("Enter the student marks ["+ (i+1) +"] : ");
			for (int j=0; j<3; j++) {
				marks[i][j] = in.nextInt();
				total[i] = total[i] + marks[i][j];
			}
		}

		for (int i=0; i<5; i++) {
			avg[i] = compute_avg(marks[i][0], marks[i][1], marks[i][2]);
			System.out.println("For student" + (i+1));
			System.out.println("Marks: " + total[i]);
			System.out.println("Average: " + avg[i]);
		}
	}

	static int compute_avg(int m1, int m2, int m3) {
		int min = m1;
		if (m2<m1) {
			min = m2;
		}
		if (m3<min) {
			min = m3;
		}

		int total = (m1+m2+m3) - min;
		return (int) Math.ceil(total/2.0);
	}
}
