#include <iostream>
using namespace std;

class Shape {

public:
	virtual double area() = 0;
};

class Rectangle : public Shape {
	double lenght;
	double width;

public:
	Rectangle(double l, double w) : lenght(l), width(w) {}
	double area() override {
		return lenght * width;
	}
};

class Circle : public Shape {
	double radius;

public:
	Circle(double r) : radius(r) {}
	double area() override {
		return 3.14 * radius * radius;
	}
};

class Triangle : public Shape {
	double base;
	double height;

public:
	Triangle(double b, double h) : base(b), height(h) {}
	double area() override {
		return 0.5 * base * height;
	}
};

int main() {
	Rectangle r(3, 5);
	Circle c(4);
	Triangle t(4, 6);

	cout << "Rectangle area :" << r.area() << endl;
	printf("Rectangle area : %.f\n", r.area());
	cout << "Circle area :" << c.area() << endl;
	printf("Circle area : %.2f\n", c.area());
	cout << "Triangle area :" << t.area() << endl;
	printf("Triangle area : %.f\n", t.area());

	return 0;
}