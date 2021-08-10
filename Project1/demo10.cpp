#include <iostream>

int main()
{
	using namespace std;
	int a, num1, num2, num3;
	cin >> a;
	num1 = a / 100;
	num3 = a % 100 % 10;
	cout << (a % 100 - num3) + num1 + num3 * 100;

	return 0;
}