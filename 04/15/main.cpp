#include <iostream>
#include <string>
#include <math.h>

void merge(double* arr, int l, int m, int r) { 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

	double *L = new double[n1], *R = new double[n2]; 

	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];
	
	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2) { 
		if (L[i] <= R[j]) { 
				arr[k] = L[i]; 
				i++; 
		} else { 
				arr[k] = R[j]; 
				j++; 
		} 
		k++; 
	} 

	while (i < n1)
		arr[k++] = L[i++]; 
	while (j < n2)
		arr[k++] = R[j++]; 

	delete [] L;
	delete [] R; 
} 

void mergeSort(double* arr, int l, int r) {
	if (l < r) {
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

class Shape {
public:
	virtual ~Shape() {}
	virtual double getArea() = 0;
};

class Square : public Shape {
public:
	Square(double s) : side(s) {}
	virtual ~Square() {}

	virtual double getArea() {
		return side * side;
	}
private:
  double side;
};

class Rectangle : public Shape {
public:
	Rectangle(double s1, double s2) : side1(s1), side2(s2) {}
	virtual ~Rectangle() {}

	virtual double getArea() {
		return side1 * side2;
	}
private:
	double side1, side2;
};

class Triangle : public Shape {
public:
	Triangle(double b, double h) :
		base(b),
		height(h) {}
	virtual ~Triangle() {}
	virtual double getArea() {
		return base * height / 2;
	}
private:
	double base;
	double height;
};

class Circle : public Shape {
public:
	Circle(double r) :
		radius(r) {}
	virtual ~Circle() {}
	virtual double getArea() {
		return pi * radius * radius;
	}
private:
	const double pi = 3.1415;
	double radius;
};

int main() {
	int N;
	std::cin >> N;
	double* areas = new double[N];
	for(int i = 0; i < N; i++) {
		std::string type;
		double side1;
		double side2;
		std::cin >> type;
		if(type == "Square") {
			std::cin >> side1;
			Square obj = Square(side1);
			areas[i] = obj.getArea();
		}
		if(type == "Rectangle") {
			std::cin >> side1 >> side2;
			Rectangle obj = Rectangle(side1, side2);
			areas[i] = obj.getArea();
		}
		if(type == "Triangle") {
			std::cin >> side1 >> side2;
			Triangle obj = Triangle(side1, side2);
			areas[i] = obj.getArea();
		}
		if(type == "Circle") {
			std::cin >> side1;
			Circle obj = Circle(side1);
			areas[i] = obj.getArea();
		}
	}
	mergeSort(areas, 0, N - 1);
	for(int i = 0; i < N; i++) {
		std::cout << areas[i] << " ";
	}
	return 0;
}
