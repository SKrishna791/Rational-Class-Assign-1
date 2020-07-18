/*
 * COEN 244 - Assignment 1
 * Sabari Krishna (40079144)
 * Karyn Mae Gamay (40044481)
 *
 * This .cpp file contains the main, which will be run to see the results of the Rational class
 

#include<iostream>
#pragma once
#include"Rational1.h"
using namespace std;
int main()
{
	//Rational r = Rational(7, 8), r1(1, 3), r2(7, 8), r3(1, 3);
	Rational r = Rational(1, 4), r1(1, 4), r2(0, 4), r3(1, 4), r4(1,4);
	r.add(1,3);
	r.toRationalString();
	r.print();

	r1.subtract(7, 8);
	r1.toRationalString();
	r1.print();

	r2.multiply(1, 3);
	r2.toRationalString();
	r2.print();

	r3.divide(7, 8);
	r3.toRationalString();
	r3.print();
}


