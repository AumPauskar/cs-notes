/* Termwork 2
 * Write a program to demonstrate the implementation of class and its member methods. 
 * Design a class by name myTriangle to model a triangle geometrical object with three sides.
 * Include functions to:
 * 1. Initialize the three sides of triangle.
 * 2. Determine the type of triangle represented by the three sides (Equilateral/Isosceles/
 *    Scalene triangle).
 * 3. Compute and return the area of the triangle.
 * 
 * Note:
 * When three sides are given we use the following formula:
 * s=(a+b+c)/2;
 * area=sqrt(s*(s-a)*(s-b)*(s-c));
*/

import java.lang.Math;

class MyTriangle {
	double side1, side2, side3, area, s;
	int tmp;
	MyTriangle(int a, int b, int c) {
		this.side1 = a;
		this.side2 = b;
		this.side3 = c;
	}

	int typeTriangle() {
		
		// conditions
		// 1 -> equilateral triangle
		// 2 -> isosceles triangle
		// 3 -> scalene triangle
		if (side1 == side2 && side2 == side3 && side3 == side1) {
			tmp = 1;
		} else if (side1 == side2 || side2 == side3 || side3 == side1){
			tmp = 2;
		} else {
			tmp = 3;
		}
		return tmp;
	}
	double computeArea() {
		s = side1 + side2 + side3;
		area = Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));
		return area;
	}
}
public class tw2 {

	public static void main(String[] args) {
		MyTriangle triangle1 = new MyTriangle(4, 4, 6);
		int tmp = triangle1.typeTriangle();
		switch (tmp) {
			case 1:
			System.out.println("Equilateral triangle");
			break;

			case 2:
			System.out.println("Isosceles triangle");
			break;

			case 3:
			System.out.println("Scalene triangle");
			break;
		
			default:
			break;
		}
		System.out.println(triangle1.computeArea());

	}
}