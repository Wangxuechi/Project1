#include <iostream>
#include <cmath>

int main()
{
	using namespace std;
	float a, b, c;
	cin >> a >> b >> c;
	float p;
	p = (a + b + c) / 2;
	printf("%f", sqrt(p * (p - a) * (p - b) * (p - c)));
}