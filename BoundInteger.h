#include<iostream>
using namespace std;
class BoundInteger
{
	int lowerBound;
	int upperBound;
	int value;
	bool isvalidBound(int lb, int ub);
public:
	BoundInteger();
	BoundInteger(int lb, int ub);
	BoundInteger(int lb, int ub, int val);
	void setValue(int val);
	int getValue();
	int getLowerBound();
	int getUpperBound();
	void increment(int inc = 1);
	void decrement(int dec = 1);
	bool isValidValue(int val);
};
