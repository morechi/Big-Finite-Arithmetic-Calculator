#pragma once

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <cmath>
#include <algorithm>
#include <stdexcept>

using namespace std;

void printOperationTables();

class MyNumber
{
	string value;
	bool sign;

public:
	MyNumber(string n_value);
	MyNumber(string n_value, bool n_sign);
	MyNumber() : sign(true), value("a") {}
	
	void enter();
	string out() const;
	string get_value() const;

	MyNumber addition(const MyNumber& other) const;
	MyNumber subtraction(const MyNumber& other) const;
	MyNumber multiplication(const MyNumber& other) const;
	MyNumber division(const MyNumber& other, string& ost) const;

	bool operator<(const MyNumber& other) const;
	bool operator>(const MyNumber& other) const;
	bool operator>=(const MyNumber& other) const;
	bool operator==(const MyNumber& other) const;
};




