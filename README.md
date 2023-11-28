#include <iostream>

// 기본 도형 클래스 //
class Shape {
public:
    // 가상 함수로 선언하여 도형마다 넓이를 계산할 수 있도록 함
    virtual double calculateArea() const = 0;
};

// 원 클래스 //
class Circle : public Shape {
private:
    double radius;

public:
    // 생성자 //
    Circle(double r) : radius(r) {}
    // 넓이 계산 함수 오버라이딩 //
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

// 직사각형 클래스 //
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // 생성자 //
    Rectangle(double l, double w) : length(l), width(w) {}
    // 넓이 계산 함수 오버라이딩 //
    double calculateArea() const override {
        return length * width;
    }
};

// 삼각형 클래스 //
class Triangle : public Shape {
private:
    double base;
    double height;

public:
    // 생성자 //
    Triangle(double b, double h) : base(b), height(h) {}
    // 넓이 계산 함수 오버라이딩 //
    double calculateArea() const override {
        return 0.5 * base * height;
    }
};

int main() {
    // 각 도형 객체 생성 //
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 8.0);
    // 각 도형의 넓이 출력 //
    std::cout << "Circle Area: " << circle.calculateArea() << std::endl;
    std::cout << "Rectangle Area: " << rectangle.calculateArea() << std::endl;
    std::cout << "Triangle Area: " << triangle.calculateArea() << std::endl;

    return 0;
}
