/*
 * COEN 244 - Assignment 1
 * Sabari Krishna (40079144)
 * Karyn Mae Gamay (40044481)
 *
 * This header file contains the declarations of the variables and the functions used to perform
 * the arithmetic operations
 */

#pragma once
#define rational_H   // To prevent multiple inclusions of header files

class Rational
{
	int numerator;    //private members
	int denominator;  //private members
public:

	Rational(int, int);    //Constructor of the Rational class
	void add(int, int);    //For addition
	void subtract(int, int); //For subtraction
	void multiply(int, int); //For multiplication
	void divide(int, int);   //For division
	void toRationalString();  //Returns string representation of a Rational
	double toDouble(int);	//Returns a double
	void simplify(); //Reduced form
	void print(); // Prints results
};
