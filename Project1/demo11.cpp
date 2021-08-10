#include <iostream>

int main()
{
	using namespace std;
	float average, aver1, aver2, a;
	average = 9.6;
	aver1 = 9.4;
	aver2 = 9.8;
	a = (average * 6 - ((average * 6 - aver1 * 5) + (average * 6 - aver2 * 5))) / 4;
	cout << a;

	return 0;
}