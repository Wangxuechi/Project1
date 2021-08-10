#include <iostream>

int main(void)
{
	using namespace std;

	double a, b;
	scanf_s("%lf %lf", &a, &b);
	printf("%.2f", (a * b) / (a + b));

	return 0;
}