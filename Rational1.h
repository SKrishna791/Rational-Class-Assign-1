/*
 * COEN 244 - Assignment 1
 * Sabari Krishna (40079144)
 * Karyn Mae Gamay (40044481)
 *
 * This header file contains the body of the functions declared in the rational.h file
 */

#pragma once
#include<iostream>
#include"rational.h"
using namespace std;
int HCF(int, int); // used to get the Highest common factor and hence change to reduced form

/*
 * Constructor that declares the numerator and the denominator
 * Also checks that none of the values are 0.
 *
 * If a value is 0, it will be automatically changed to the value of 1
 */
Rational::Rational(int mnum, int mdin) {
	if(mnum == 0 || mdin == 0){
		cout << "Unable to perform arithmetics with the value of 0." << endl;
		cout << "Value has been changed to 1.\n" << endl;

		if(mnum == 0){
			mnum = 1;
		} else {
			mdin = 1;
		}
	}

	numerator = mnum;
	denominator = mdin;
}

/*
 * Function that performs the addition
 */
void Rational::add(int mnum, int mden)
{
	int x = mnum; int y = mden; /// locally storing numerator and dinominator
	cout << x << "/" << y << " + " << numerator << "/" << denominator << " = ";
	y = denominator * mden;                        // Adds the rational numbers by making
	x = numerator * mden + mnum * denominator;     // the denominators common (muliply both denominators)
	numerator = x;
	denominator = y;
}

/*
 * Function that performs the multiplication
 */
void Rational::multiply(int mnum,int mden ) {
	cout << mnum << "/" << mden << " * " << numerator << "/" << denominator << " = " ;
	numerator = numerator * mnum;
	denominator = denominator * mden;
}

/*
 * Function that performs the division
 */
void Rational::divide(int mnum, int mden) {
	cout << numerator << "/" << denominator << " % " << mnum << "/" << mden << " = ";
	numerator= numerator * mden;     // numerator is multiplied with the denominator the 2nd rational number
	denominator = denominator * mnum; // vice-versa
}

/*
 * Function that performs the subtraction
 */
void Rational::subtract(int mnum, int mden) {
	int lcm;  /// We need to find LCM for subtraction of two rational numbers

	cout << numerator << "/" << denominator << " - " << mnum << "/" << mden << " = ";

	lcm = denominator * mden;  ///We get a common denominator.
	numerator = (numerator * (lcm / denominator)) - (mnum * (lcm / mden));
	denominator = lcm;
}

/*
 * Function that takes the numerator or the denominator or the result as an int and returns it into a double
 */
double Rational::toDouble(int num) {
	double x = (double)num;
	return x;
}

/*
 * Function that checks for equations with 0
 */
void Rational::simplify() {
	bool psing = false;
	bool nsign = false;

	if (numerator < 0)
	{
		numerator = -numerator;
		psing= true;
	}
	if (denominator < 0)
	{
		denominator = -denominator;
		nsign = true;
	}

	int hcf = HCF(numerator, denominator);

	if (hcf != 0)
	{
		numerator = numerator / hcf;
		denominator = denominator / hcf;
	}

	if (psing ^ nsign)
		numerator = -numerator;
}

/*
 * Function that finds the highest common factor
 */
int HCF(int a, int b) {
	if (b % a == 0)
		return a;
	if (a > b)
		return HCF(b, a);
	else
		return HCF(b % a, a);
}

/*
 * Function that displays the Rational number as a string
 */
void Rational::toRationalString() {
	simplify();
	//double x = (double)numerator / (double)denominator;
	cout << numerator << "/" << denominator;
}

/*
 * Function to print whole equation
 */
void Rational::print(){
	double x = Rational::toDouble(numerator) / Rational::toDouble(denominator);
	cout << " = " << x << endl;
	cout << endl;
}
