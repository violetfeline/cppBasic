#include <iostream>
#include <string>
#include <math.h>

class Shape {
public:
	virtual ~Shape() {}
	virtual double getArea() = 0;
};

class Cube : public Shape {
public:
	Cube(double s) : side(s) {}
	virtual ~Cube() {}

	virtual double getArea() {
		return side * side * side;
	}
private:
  double side;
};

class Pyramid : public Shape {
public:
	Pyramid(double b, double h) : bside(b), height(h) {}
	virtual ~Pyramid() {}

	virtual double getArea() {
		return bside * bside * height / 3;
	}
private:
	double bside, height;
};

class Ball : public Shape {
public:
	Ball(double r) :
		radius(r) {}
	virtual ~Ball() {}
	virtual double getArea() {
		return pi * radius * radius * radius * 4 / 3;
	}
private:
	const double pi = 3.1415;
	double radius;
};

int main() {
	int N;
	std::cin >> N;
	double area_sum = 0;
	for(int i = 0; i < N; i++) {
		std::string type;
		double side1;
		double side2;
		std::cin >> type;
		if(type == "Cube") {
			std::cin >> side1;
			Cube obj = Cube(side1);
			area_sum += obj.getArea();
		}
		if(type == "Pyramid") {
			std::cin >> side1 >> side2;
			Pyramid obj = Pyramid(side1, side2);
			area_sum += obj.getArea();
		}
		if(type == "Ball") {
			std::cin >> side1;
			Ball obj = Ball(side1);
			area_sum += obj.getArea();
		}
	}
	std::cout << area_sum;
	return 0;
}
