#include"BoundInteger.h"
BoundInteger::BoundInteger()
{
	lowerBound = INT_MIN;
	upperBound = INT_MAX;
	value = INT_MIN;
}

BoundInteger::BoundInteger(int lb, int ub)
{
	if (isvalidBound(lb, ub))
	{
		
		lowerBound = lb;
		upperBound = ub;
		value = lb;
	}
	else
	{
		BoundInteger();
	}

}

BoundInteger::BoundInteger(int lb, int ub, int val)
{
	if (isvalidBound(lb, ub))
	{

		

			lowerBound = lb;
			upperBound = ub;
			value = val;
		
	}
	else
	{
		BoundInteger();
	}
}

bool BoundInteger::isvalidBound(int lb, int ub)
{
	if (lb <= ub)
	{
		return true;
	}
	else
	{
		return false;
	}
}


bool BoundInteger::isValidValue(int val)
{
	if (val >= lowerBound && val <= upperBound)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void BoundInteger::setValue(int val)
{
	if (isValidValue(val))
	{
		value = val;
	}

}

int BoundInteger::getValue()
{
	return value;
}


int BoundInteger::getLowerBound()
{
	return lowerBound;
}


int BoundInteger::getUpperBound()
{
	return upperBound;
}

void BoundInteger::decrement(int dec)
{

	if ((value - dec) < lowerBound)
	{
		int diff = upperBound - lowerBound;
		diff = diff + 1;
		int num = dec % diff;
		int temp = value;
		if ((temp -= num) < lowerBound)
		{
			diff = value-lowerBound;
			diff += 1;
			value = upperBound - (num - diff);
		}
		else
		{
			value -= num;
		}
	}
	else
	{
		value = value -dec;
	}
}


void BoundInteger::increment(int inc)
{

	if ((value + inc) > upperBound)
	{
		int diff = upperBound - lowerBound;
		diff = diff + 1;
		int num = inc % diff;
		int temp = value;
		if ((temp += num) > upperBound)
		{
			diff = upperBound - value;
			diff += 1;
			value = lowerBound + (num - diff);
		}
		else
		{
			value+= num;
		}
	}
	else
	{
		value = value + inc;
	}
}