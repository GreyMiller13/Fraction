#pragma once
#include <iostream>

using namespace std;

class Fraction
{
private:
	double numerator;
	double denominator;
public:
	void SetNumerator(double numerator) {
		this->numerator = numerator;
	}
	void SetDenominator(double denominator) {
		this->denominator = denominator;
	}
	double GetNumerator() {
		return numerator;
	}
	double GetDenominator() {
		return denominator;
	}
	double Sum() {
		return numerator + denominator;
	}
	double Subtraction() {
		return numerator - denominator;
	}
	double Multiplicate() {
		return numerator * denominator;
	}
	double Division() {
		try
		{
			if (denominator != 0) {
				double result = numerator / denominator;
				return result;
			}
			else 
				throw exception("Division by zero!");
		}
		catch (const std::exception& e)
		{
			cerr << "Error: " << e.what() << endl;
		}
			
		
	}
};

