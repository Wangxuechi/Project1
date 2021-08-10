#include <iostream>

int main()
{
	using namespace std;

	int a, b;
	cin >> a >> b;
	double c;
	c = (double)b / (double)a * 100;
	
	printf("%.3f%c", c, '%');


	return 0;
}