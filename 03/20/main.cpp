#include <iostream>
#include <math.h>

double surface(double &a, double &b, double &c) {
	return sqrt((a+b+c)*(-a+b+c)*(a-b+c)*(a+b-c)) / 4;
}

int main() {
	double a, b, c;
	std::cin >> a >> b >> c;
	std::cout << surface(a, b, c);
	return 0;
}