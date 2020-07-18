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
*/
 //you might remove this director if you are using different compiler
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main()
{


	string text = {}; //to read text in table

	string LVM_customer[24] = { "LVM Customer", "Lee Valley", "Lee Valley", "Pizza Pizza",
	"Costco", "Costco", "Sears", "Clearly Contacts", "Clearly Contacts",
	"RCA Stamps", "McLeans", "McLeans", "McLeans", "Amazon", "Amazon",
	"Amazon", "Cisco", "Cistel", "Sears", "Sears", "Sears", "Sears", "IKEA", "IKEA" }; //Column #1 in the table

	string Postal_Code[24] = { "Postal Code" ,"K1A 0B4", "K1A 0B4", "K8P 1A0", "K2N3A0", "L5S 3E1", "K1T1Z7",
	"V3B1A0", "T1A 0B1", "K1A2B4", "M4L 3S2", "M4L 3S2", "B3K2A4", "T2E1A4",
	"L6W 2S4", "L6W2S4", "K1R 7Y6", "B3H 1C2",	"M4L 3R1", "M4L3R1", "M4L 3R1", "M4L 3R1","K3B1S2", "K3B1S2" }; //Column #4 in the table

	string FSA[24] = {}, City[24] = {}, Fixed_Postal_Code[24] = {}; // Declare and initiate empty character for column #2-3

}
