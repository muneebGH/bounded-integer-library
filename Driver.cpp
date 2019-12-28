#include"BoundInteger.h"
int main()
{


	BoundInteger bi(-1,1,0);
	//bi.decrement(37468);
	//cout << bi.getValue() << endl;
	bi.increment(-10);
	cout << bi.getValue() << endl;

	system("pause");
	return 0;
}