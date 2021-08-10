#include <iostream>

int main()
{
	using namespace std;
	double a, b, c;

	cin >> a >> b;
	c = a / b;
	cout << b * (c - (int)c);

	return 0;
}