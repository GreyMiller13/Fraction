#include <iostream>
#include "Fraction.h"

using namespace std;

int main() {
	Fraction fraction;
	fraction.SetNumerator(10);
	fraction.SetDenominator(0.0);
	cout << fraction.Division();
	
	return 0;
}