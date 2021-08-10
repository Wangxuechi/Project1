#include <iostream>
#include <cmath>
int main()
{
	using namespace std;

	double a, b, c, d, x;
	scanf_s("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &x);
	printf("%.7f",  a * pow(x, 3) + b * pow(x, 2) + c * x + d);
}